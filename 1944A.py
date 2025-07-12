# Problem link: https://codeforces.com/problemset/problem/1944/A
# Solve Link: https://codeforces.com/contest/1944/submission/321735525

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, k = [int(x) for x in input().split()]
    degree = n-1

    if k >= degree:
        return 1
    else:
        return n


for _ in range(int(input())):
    print(solve())