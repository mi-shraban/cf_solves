# Problem link: https://codeforces.com/problemset/problem/4/A
# Solve Link: https://codeforces.com/contest/4/submission/251792551

import sys


def input():
    return sys.stdin.readline().strip()


def solve():
    n = int(input())
    if n == 2 or int(bin(n)[-1]):
        sys.stdout.write(f"NO\n")
    else:
        sys.stdout.write(f"YES\n")


solve()