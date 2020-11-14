def collatz(s):
	if s==1:
		return 0;
	if s%2 == 0:
		return s/2;
	else:
		return s*3+1;
		
def main():
	n = int(input())
	for i in range(n):
		s = int(input())
		j = 0
		while s != 0:
			s = collatz(s)
			j += 1
		print(j)
	
main()