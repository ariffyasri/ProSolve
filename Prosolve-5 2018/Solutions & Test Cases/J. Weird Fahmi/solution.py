
INF = 1e9

def min_coins(v, S, V):
    if V[v] != INF:
        return V[v]
    for s in S:
        if s <= v:
            V[v] = min(V[v], min_coins(v-s, S, V)+1)
    return V[v]

def main():
    N = int(input())
    M = int(input())
    S = list(map(int, input().split()))
    V = [0] + [INF for i in range(N)]
    print(min_coins(N, S, V))

if __name__ == '__main__':
    main()