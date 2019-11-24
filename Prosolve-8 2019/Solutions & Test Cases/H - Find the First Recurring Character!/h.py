for _ in range(int(input())):
    listAlpha = []
    listDistinct = []
    N = list(input())

    for i in range(0,len(N)):
        if N[i] not in listAlpha:
            listAlpha.append(N[i])
        else:
            listDistinct.append(N[i])

    if len(listDistinct) > 0:
        print(f"{listDistinct[0]}")
    else:
        print(f"None")