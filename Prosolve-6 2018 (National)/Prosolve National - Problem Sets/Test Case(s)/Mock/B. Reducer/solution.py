n = int(input())

for i in range(n):
	n_lines = int(input())
	previous = None
	total = 0

	for j in range(n_lines):
		# split by tab
		key, value = input().split('\t')
		
		# if the key is not same with previous key
		if key != previous:
			if previous is not None:
				# display the total and the previous key
				print(str(total) + '\t' + previous)
			# set new key to previous
			previous = key

			# initial total back to zero
			total = 0
		# else just add into total
		total += int(value)
	# display the last previous word with total
	print(str(total) + '\t' + previous)
	print()