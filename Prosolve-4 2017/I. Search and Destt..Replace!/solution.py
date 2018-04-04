
t = input()
N = int(input())

for i in range(N):
    s, r = input().split()
    t = t.replace(s, r)

print(t)
