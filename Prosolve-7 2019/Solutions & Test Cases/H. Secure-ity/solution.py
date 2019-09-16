from math import sqrt

aN = int(input())
lF = []
while aN % 2 == 0: 
    lF.append(2)
    aN /= 2

for anN in range(3, int(sqrt(aN)) + 1,2):
    while aN % anN == 0: 
        lF.append(anN)
        aN /= anN

if aN > 2:
    lF.append(aN)

print(" x ".join([str(int(aN)) for aN in lF]))
