for _ in range(int(input())):
    calcin = input().split()
    if len(calcin) != 3:
        print("INVALID")
        continue
    if calcin[0].isdigit():
        x = int(calcin[0])
        if x < 0 or x > 9:
            print("INVALID")
            continue
    else:
        print("INVALID")
        continue
    if calcin[2].isdigit():
        y = int(calcin[2])
        if y < 0 or y > 9:
            print("INVALID")
            continue
    else:
        print("INVALID")
        continue

    if calcin[1] == "+":
        print((x+y))
    elif calcin[1] == "-":
        print((x-y))
    elif calcin[1] == "*":
        print((x*y))
    elif calcin[1] == "/":
        if y == 0:
            print("INVALID")
        else:
            print((x/y))
    else:
        print("INVALID")
