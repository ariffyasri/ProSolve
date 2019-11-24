N=[]
for _ in range(int(input())):

    N = sorted(list(map(int,input().split())))

    ans = (N[4] * N[0]) + (N[0] * N[2]) + (N[2] * N[1]) + (N[1] * N[3])

    print(ans)
