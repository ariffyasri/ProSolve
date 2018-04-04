
credentials = []

C = int(input())

for i in range(C):
    cred = input().split(" ")   # split by space
    credentials.append(cred)

T = int(input())

for i in range(T):
    check_cred = input().split(" ")
    if check_cred in credentials:
        print("YES")
    else:
        print("NO")