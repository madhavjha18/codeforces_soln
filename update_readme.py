import os
import re
import requests
from bs4 import BeautifulSoup

README_FILE = "README.md"

def get_cf_title(problem_id):
    """
    Fetch official Codeforces problem title using problem ID like '71A'.
    """

    match = re.match(r"(\d+)([A-Z]\d*)", problem_id)
    if not match:
        return None, None

    number, letter = match.groups()

    urls = [
        f"https://codeforces.com/problemset/problem/{number}/{letter}",
        f"https://codeforces.com/contest/{number}/problem/{letter}",
    ]

    for url in urls:
        try:
            res = requests.get(url)
            if res.status_code == 200:
                soup = BeautifulSoup(res.text, "html.parser")
                title_tag = soup.find("div", class_="title")
                if title_tag:
                    title = title_tag.text.strip()
                    title = title[title.index('-') + 2 :]
                    return title, url
        except:
            pass

    return None, None


def generate_readme():
    files = [f for f in os.listdir('.') if f.endswith('.cpp')]
    files.sort()

    rows = []
    s_no = 1

    for file in files:
        problem_id = file.replace(".cpp", "")

        title, url = get_cf_title(problem_id)
        if not title:
            title = f"Problem {problem_id}"
            url = "#"

        row = f"| {s_no} | [{title} ({problem_id})]({url}) | [{file}]({file}) | — |"
        rows.append(row)
        s_no += 1

    content = "# Codeforces Solutions\n\n| S.No | Problem | Solution | Level |\n|---|---|---|---|\n"
    content += "\n".join(rows)

    with open(README_FILE, "w") as f:
        f.write(content)

    print("README.md updated successfully!")


if __name__ == "__main__":
    generate_readme()
