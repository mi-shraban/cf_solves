# Problem link: https://codeforces.com/problemset/problem/1549/B
# Solve Link: https://codeforces.com/contest/1549/submission/321731778

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [0] + [int(x) for x in input()] + [0]
    b = [0] + [int(x) for x in input()] + [0]

    cnt = 0

    for i in range(1, n+1):
        if b[i] == 1 and a[i] == 0:
            cnt += 1
        elif b[i] == 1 and a[i-1] == 1:
            cnt += 1
            a[i - 1] = 0
        elif b[i] == 1 and a[i+1] == 1:
            cnt += 1
            a[i + 1] = 0

    print(cnt)


for _ in range(int(input())):
    solve()