
locExi = 0
locMin = 0
locMax = 0
arr = ([0] * 1000)

aNum  = int(input())

for k in range (0,aNum):
	inp = int(input())
	arr.insert(k,inp)

for i in range (0,aNum):
	if i != 0 and i != (aNum-1):
		if arr[i] > arr[i+1] and arr[i] > arr[i-1]:
			locMax += 1
		elif arr[i] < arr[i+1] and arr[i] < arr[i-1]:
			locMin += 1

locExi = locMin + locMax

print ("Local Exima : {}".format(locExi))