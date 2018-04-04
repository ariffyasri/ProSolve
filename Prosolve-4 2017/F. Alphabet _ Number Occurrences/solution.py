T = int(input())

for i in range(T):

    s = input()

    alphabet, digit = 0, 0
    for c in s:
        if c.isdigit():
            digit += 1
        elif c.isalpha():
            alphabet += 1
        else:
            pass
            
    print("Alphabet: {}, Digit: {}".format(alphabet, digit))