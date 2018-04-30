
t = int(input())

for _ in range(t):
    
    n, k = map(int, input().split())
    beds = [0 for i in range(n)]
    for x in map(int, input().split()):
        beds[x-1]=1

    s = 1
    while True:
        if sum(beds) == len(beds): break
        beds_cpy = beds[:]
        for i in range(len(beds)):
            if beds[i] == 1:
                if i == 0:
                    beds_cpy[i+1] = 1
                elif i == len(beds)-1:
                    beds_cpy[i-1] = 1
                else:
                    beds_cpy[i-1] = beds_cpy[i+1] = 1
        beds = beds_cpy[:]
        s += 1

    print(s)