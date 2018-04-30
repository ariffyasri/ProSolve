
a = int(input())

for _ in range(a):
    s = input()
    print(s.lower())
    print(s.upper())
    print(s[0].upper()+s[1:])
    print(s.swapcase())
    print(' '.join(s[:1].upper() + s[1:] for s in s.split(' ')))
    print("\n")