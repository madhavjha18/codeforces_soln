import os

def get_problem_list():
    files = os.listdir(".")
    problems = []

    for f in files:
        if f.endswith(".cpp"):
            problems.append(f)

    problems.sort()
    return problems

problems = get_problem_list()

with open("README.md", "w") as f:
    f.write("# Codeforces Solutions\n")
    f.write("Automatically updated list of solved problems.\n\n")
    f.write("## Problems\n")
    for p in problems:
        f.write(f"- `{p}`\n")
