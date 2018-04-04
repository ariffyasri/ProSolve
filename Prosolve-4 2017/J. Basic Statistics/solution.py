
numbers = list(map(int, input().split()))

mean   = sum(numbers) / len(numbers)
median = numbers[int(len(numbers)/2)]

print("Mean : %.2f" % mean)
print("Median : %.2f" % median)