
import sys


def bfs(n, adj_matrix, start, end):

    parent = [None] * n 
    parent[start] = start

    queue = [start]

    while queue:
        v = queue.pop()
        for u in range(n):
            if adj_matrix[v][u] > 0 and parent[u] is None:
                parent[u] = v
                if u == end:
                    return parent
                queue.append(u)

    return parent


def edmonds_karp(n, adj_matrix, source, sink):

    full_flow = 0

    while True:

        parent = bfs(n, adj_matrix, source, sink)
        if not parent[sink]:
            break

        v, flow = sink, sys.maxsize
        while v != source:
            flow = min(flow, adj_matrix[parent[v]][v])
            v = parent[v]

        v = sink
        while v!= source:
            adj_matrix[parent[v]][v] -= flow
            adj_matrix[v][parent[v]] += flow
            v = parent[v]

        full_flow += flow

    return full_flow





V, E = map(int, input().split())

adj_matrix = [[0 for _ in range(V+1)] for _ in range(V+1)]

for _ in range(E):
    u, v, b = map(int, input().split())
    adj_matrix[u][v] += b
    adj_matrix[v][u] += b

S, D = map(int, input().split())


x = edmonds_karp(V+1, adj_matrix, S, D)

print(x)

