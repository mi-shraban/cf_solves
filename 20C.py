# Problem link: https://codeforces.com/problemset/problem/20/C
# Solve Link: https://codeforces.com/contest/20/submission/216430252

import heapq
inf = 10**18

def dijkstra(G, s):
    dis = [inf for i in range(len(G)+1)]
    parents = [-1 for i in range(len(G)+1)]
    dis[s] = 0

    queue = []
    heapq.heappush(queue, (0, s))

    while queue:
        d, u = heapq.heappop(queue)
        if d > dis[u]:
            continue
        for v, w in G[u]:
            if dis[u] + w < dis[v]:
                dis[v] = dis[u] + w
                parents[v] = u
                heapq.heappush(queue, (dis[v], v))

    return dis[1:], parents[1:]


def createGraph(v, e):
    graph = {i: [] for i in range(1, v+1)}
    for i in range(e):
        u, v, w = [int(x) for x in input().split()]
        graph[u].append((v, w))
        graph[v].append((u, w))
    return graph


def shortestPathFinder(parents, v):
    path = [v]
    while v != 1:
        if parents[v-1] == -1:
            return -1
        path.append(parents[v-1])
        v = parents[v-1]
    return path[::-1]

def solve():
    v, e = [int(x) for x in input().split()]
    graph = createGraph(v, e)
    distances, parents = dijkstra(graph, 1)

    sPath = shortestPathFinder(parents, v)
    if sPath != -1:
        print(*sPath)
    else:
        print(sPath)



solve()