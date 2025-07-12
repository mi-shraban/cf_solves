# Problem link: https://codeforces.com/problemset/problem/500/A
# Solve Link: https://codeforces.com/contest/500/submission/322749045

import sys


def input():
    return sys.stdin.readline().strip()


def pf(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, t = [int(x) for x in input().split()]
    a = [0] + [int(x) for x in input().split()]

    i = 1
    while i <= n-1:
        i += a[i]
        if i == t:
            return 'YES'
    return 'NO'


pf(solve())