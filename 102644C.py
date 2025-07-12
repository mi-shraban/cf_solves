# Problem link: https://codeforces.com/problemset/problem/102644/C
# Solve Link: https://codeforces.com/contest/102644/submission/209310126

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]

    if arr.count(0) == 0:
        return "YES"
    for i in range(n-1):
        if arr[i] == 0 and arr[i+1] == 0:
            return "YES"
    return "NO"


for _ in range(int(input())):
    print(solve())