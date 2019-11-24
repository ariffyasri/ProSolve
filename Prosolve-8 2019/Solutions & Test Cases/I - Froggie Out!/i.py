for _ in range(int(input())):
    days = 0
    hour =0
    # meter = 0
    N = int(input())
    # ans = (int(N/3))*2
    # print(ans)
    # #58 hours

    if N%2 == 0:
        ans = N*2 -2
    else:
        ans = N*2 - 3

    flagDays = True
    while flagDays == True:
        if ans - 24 > 0:
            ans = ans - 24
            days = days + 1
        else:
            hour = ans
            flagHour = False
            break
    print(f"{days}d{hour}h")
