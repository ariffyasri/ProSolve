n,b = map(int,input().split())
g = list(map(int,input().split()))

d = 0
left = 0

for i in range(n):
	x = g[i]+left
	if x == 0:
		continue
	elif x<b and left>0:
		d+=1
		left=0
	else:
		d+=(x//b)
		left=(x%b)

if left>0:
	d+= 1

print(d)