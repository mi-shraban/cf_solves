# Problem link: https://codeforces.com/problemset/problem/2094/A
# Solve Link: https://codeforces.com/contest/2094/submission/316066110

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(x)


def solve():
    s = input().split(' ')

    ans = ""
    for i in range(len(s)):
        ans += s[i][0]

    print(f"{ans}\n")


for _ in range(int(input())):
    solve()