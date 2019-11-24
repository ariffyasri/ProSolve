for _ in range(int(input())):

    num = input()
    counter = 0
    countLoop = 0
    while counter <2 :
        X = int("".join(sorted(list(num),reverse=True)))
        Y = int("".join(sorted(list(num))))
        # print(f"X = {X} Y = {Y} Num = {num}")
        num = str(X-Y)

        if(num == "6174"):
            counter = counter + 1
        countLoop = countLoop + 1
    print(countLoop)