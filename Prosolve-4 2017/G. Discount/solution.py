
T = int(input())
for i in range(T):
    
    p = int(input())

    if p < 500:
        p = p - (p * 0/100)
    elif p > 500 and p <= 1000:
        p = p - (p * 5/100)
    elif p > 1000 and p <= 2000:
        p = p - (p * 8/100)
    elif p > 2000:
        p = p - (p * 15/100)

    print("RM %.2f" % p)