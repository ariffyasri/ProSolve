
T = sorted(list(map(int, input().split())))
n = int(input())

ans = []
for i in range(len(T)):
    for j in range(i+1,len(T)):
        if abs(T[i]-T[j])==n:
            ans.append((T[i], T[j]))

if not ans:
    print('No Pair Found')
else:
    pair = ['({}, {})'.format(each[0], each[1]) for each in ans]
    print("Pair Found:", ', '.join(pair))
