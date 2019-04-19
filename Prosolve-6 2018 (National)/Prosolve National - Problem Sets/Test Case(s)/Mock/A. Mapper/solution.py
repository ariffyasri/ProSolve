import re

n = int(input())

for i in range(n):
	sentences = input()

	# remove any symbols
	clean_sentences = re.sub(r'[^a-zA-Z ]', '', sentences)

	# change all words to lower case
	clean_sentences = [word.lower() for word in clean_sentences.split()]

	# sort alphabetically (easy!)
	clean_sentences.sort()
	
	# display the word and number of occurences 
	for word in clean_sentences:
		print(word + "\t1")

	print()
