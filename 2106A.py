# Problem link: https://codeforces.com/problemset/problem/2106/A
# Solve Link: https://codeforces.com/contest/2106/submission/320552942

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(x+"\n")


def solve():
    n = int(input())
    s = [int(x) for x in input()]
    ans = 0
    for i in range(n):
        s[i] ^= 1
        ans += s.count(1)
        s[i] ^= 1

    print(f"{ans}")


for _ in range(int(input())):
    solve()