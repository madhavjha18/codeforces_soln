import os
import re

def parse_cf_filename(filename):
    """
    Extract contest number + problem letter from filenames like:
    1700A.cpp → (1700, A)
    1929B.cpp → (1929, B)
    A_sample.cpp → return None (invalid CF format)
    """
    match = re.match(r"(\d+)([A-Za-z])\.cpp$", filename)
    if match:
        contest = match.group(1)
        problem = match.group(2).upper()
        return contest, problem
    return None

def generate_table():
    files = [f for f in os.listdir(".") if f.endswith(".cpp")]
    files.sort()

    rows = []
    index = 1

    for file in files:
        parsed = parse_cf_filename(file)

        if parsed:
            contest, problem = parsed
            link = f"https://codeforces.com/problemset/problem/{contest}/{problem}"
            problem_name = f"{contest}{problem}"
        else:
            # For files like A_problem.cpp
            contest = problem = None
            link = "N/A"
            problem_name = file.replace(".cpp", "")

        rows.append(
            f"| {index} | {problem_name} | [{file}]({file}) | [{link}]({link}) |"
        )
        index += 1

    return "\n".join(rows)

def main():
    table = generate_table()

    content = f"""
# Codeforces Solutions  


## Problem List

| S.No | Problem | Solution | Problem Link |
|------|----------|-----------|--------------|
{table}

"""

    with open("README.md", "w") as f:
        f.write(content.strip() + "\n")

if __name__ == "__main__":
    main()
