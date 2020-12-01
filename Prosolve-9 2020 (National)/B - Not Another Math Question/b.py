def rectCount(n, m):
    return (m * n * (n + 1) * (m + 1)) // 4



t = int(input())

while t:
    n1,n2 = input().split()
    n1 = int(n1)
    n2 = int(n2)

    print(rectCount(n1-1, n2-1))   
    t -= 1
