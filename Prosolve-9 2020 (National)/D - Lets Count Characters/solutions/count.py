import re

regex = r"\((\w+)\)"
regex2 = r"([a-zA-Z]+)"

n = int(input())

for i in range(n):
    test_str = input()
    matches = re.finditer(regex, test_str, re.MULTILINE)
    number_of_chars = []
    for matchNum, match in enumerate(matches, start=1):
        string = match.group()
        another_matches = [len(i.group()) for i in re.finditer(regex2, string)]
        number_of_chars.extend(another_matches)
    if len(number_of_chars) > 0:
        print(max(number_of_chars))
    else:
        print(0)