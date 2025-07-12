# Problem link: https://codeforces.com/problemset/problem/115/A
# Solve Link: https://codeforces.com/contest/115/submission/321962864

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def DFS(g, s, depth=0):
    visited = set()
    visited.add(s)

    max_depth = depth

    for a in g[s]:
        if a not in visited:
            max_depth = max(max_depth, DFS(g, a, depth + 1))

    return max_depth


def solve():
    n = int(input())
    p = {x:[] for x in range(-1, n+1)}
    for i in range(1,n+1):
        p[int(input())].append(i)

    ans = DFS(p, -1)
    return ans


sys.setrecursionlimit(3000)
print_fast(solve())