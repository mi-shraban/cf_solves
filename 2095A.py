# Problem link: https://codeforces.com/problemset/problem/2095/A
# Solve Link: https://codeforces.com/contest/2095/submission/315081232

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(x)


def solve():
    n = int(input())
    m = 2 * n
    grid = [[0 for i in range(n+1)]] + [[0] + [int(x) for x in input().split(' ')] for _ in range(n)]

    p = [0] * (m+1)
    used = [0] * (m+1)
    sm = 0

    for i in range(1, n+1):
        for j in range(1, n+1):
            if not used[grid[i][j]]:
                sm += grid[i][j]
                p[i+j] = str(grid[i][j])
            used[grid[i][j]] = 1

    p[1] = str(int(m * (m + 1)/2 - sm))

    print(f"{' '.join(p[1:])}\n")


for _ in range(int(input())):
    solve()