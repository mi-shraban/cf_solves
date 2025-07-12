# Problem link: https://codeforces.com/problemset/problem/2093/A
# Solve Link: https://codeforces.com/contest/2093/submission/316201780

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(x)


def solve():
    k = int(input())
    if k & 1:
        print("YES\n")
    else:
        print("NO\n")


for _ in range(int(input())):
    solve()