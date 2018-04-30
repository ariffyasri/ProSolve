
s = input()
char = [0 for i in range(255)]

for c in s:
    char[ord(c)] += 1 

for i,v in enumerate(char):
    if v != 0:
        print("{}:{}".format(chr(i), v))