# Problem link: https://codeforces.com/problemset/problem/1472/C
# Solve Link: https://codeforces.com/contest/1472/submission/324722655

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]

    dp = a.copy()
    for i in range(n-1, -1, -1):
        dp[i] = a[i]
        j = i + a[i]
        if j < n:
            dp[i] += dp[j]

    # print_fast(dp)
    return max(dp)


for _ in range(int(input())):
    print_fast(solve())