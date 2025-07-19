# https://codeforces.com/problemset/problem/1360/E
# https://codeforces.com/contest/1360/submission/329897897

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    grid = [[int(x) for x in input()] for i in range(n)]

    # for i in range(n):
    #     for j in range(n):
    #         print((i, j), end="\t")
    #     print()

    ans = "YES"
    for i in range(n-2, -1, -1):
        for j in range(n-2, -1, -1):
            if grid[i][j] and not grid[i+1][j] and not grid[i][j+1]:
                ans = "NO"

    return ans


for _ in range(int(input())):
    print_fast(solve())