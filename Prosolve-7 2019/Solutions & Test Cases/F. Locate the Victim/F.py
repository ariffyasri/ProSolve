from math import sqrt
from itertools import permutations
from collections import defaultdict

def sC(p0,p1):
	pass

def d(x0,x1,y0,y1):
	return sqrt((x0 - x1) ** 2 + (y0 - y1) ** 2)
	
def a(r0,r1,d):
	return (r0 ** 2 - r1 ** 2 + d ** 2) / (2 * d)
	
def h(r0, a):
	return sqrt(r0 ** 2 - a ** 2)
	
def candidatePoint(x0,x1,y0,y1,r0,r1):
	x2 = x0 + a(r0,r1,d(x0,x1,y0,y1)) * (x1 - x0) / d(x0,x1,y0,y1)
	x3_1 = x2 + h(r0, a(r0,r1,d(x0,x1,y0,y1))) * (y1 - y0) / d(x0,x1,y0,y1)
	x3_2 = x2 - h(r0, a(r0,r1,d(x0,x1,y0,y1))) * (y1 - y0) / d(x0,x1,y0,y1)
	
	y2 = y0 + a(r0,r1,d(x0,x1,y0,y1)) * (y1 - y0) / d(x0,x1,y0,y1)
	y3_1 = y2 - h(r0, a(r0,r1,d(x0,x1,y0,y1))) * (x1 - x0) / d(x0,x1,y0,y1)
	y3_2 = y2 + h(r0, a(r0,r1,d(x0,x1,y0,y1))) * (x1 - x0) / d(x0,x1,y0,y1)
	return [(round(x3_1), round(y3_1)), (round(x3_2), round(y3_2))]
	
nC = int(input())
cDs = []

for cI in range(nC):
        cDs.append(tuple([float(aE) for aE in input().split(" ")]))

cPs = defaultdict(lambda: 0)
for cP in permutations(cDs, 2):
	x0,y0,r0,x1,y1,r1 = *cP[0], *cP[1]
	if not (d(x0,x1,y0,y1) > (r0 + r1) or (d(x0,x1,y0,y1) < abs(r0 - r1))):
		fP1,fP2 = candidatePoint(x0,x1,y0,y1,r0,r1)
		cPs[fP1] += 1
		cPs[fP2] += 1

print("{0} {1}".format(*sorted(cPs.items(), key=lambda dE: dE[1], reverse=True)[0][0]))
	
