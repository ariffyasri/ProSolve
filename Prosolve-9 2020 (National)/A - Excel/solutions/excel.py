n = int(input())

for i in range(n):
    col = int(input())
    string = ""
    while col > 0:
        m = int(col % 26)
        b = col - m
        col = b / 26
        if m < 1:
            m = 26
            col -= 1
        string = chr(64 + m) + string
    print(string)