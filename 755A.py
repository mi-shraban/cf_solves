# Problem link: https://codeforces.com/problemset/problem/755/A
# Solve Link: https://codeforces.com/contest/755/submission/321744563

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())

    if n > 2:
        return n-2
    else:
        if n == 1:
            return 3
        elif n == 2:
            return 4


print(solve())