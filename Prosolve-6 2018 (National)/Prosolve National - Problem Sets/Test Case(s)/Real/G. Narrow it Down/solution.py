
a = list(map(int, input().split()))

while len(a) > 0:
    new_a = []
    for i in range(len(a)-1):
        new_a.append(abs(a[i]-a[i+1]))
    a = new_a
    print(' '.join(map(str, a)))