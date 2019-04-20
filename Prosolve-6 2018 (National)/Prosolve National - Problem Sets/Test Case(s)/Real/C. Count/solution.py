
for _ in range(int(input())):
    N = int(input())
    i, o = 1, 0
    while(N > 1):
        i, o, N = i+o, i, N-1
    print(2*i + o)