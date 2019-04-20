
N = int(input())

for i in range(N):
    a, o, b = input().split()

    a = float(a)
    b = float(b)

    if o == '+':
        print("%.2f" % (a + b))
    elif o == '-':
        print("%.2f" % (a - b))
    elif o == '*':
        print("%.2f" % (a * b))
    elif o == '/':
        if b == 0:
            print("NaN")
        else:
            print("%.2f" % (a / b))