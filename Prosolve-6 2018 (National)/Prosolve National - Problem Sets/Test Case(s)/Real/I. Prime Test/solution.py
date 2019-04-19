
def prime_test(n):
    if n <= 1: return False
    if n <= 3: return True
    for i in range(2, n-1):
        if n % i == 0:
            return False
    return True

def main():
    primes = []
    for i in range(2, 10001):
        if prime_test(i):
            primes.append(i)

    T = int(input())
    for _ in range(T):
        N = int(input())
        if N in primes:
            print("Prime")
        else:
            for p in primes:
                if N % p == 0:
                    print(p)
                    break

if __name__ == '__main__':
    main()