# Problem link: https://codeforces.com/problemset/problem/939/A
# Solve Link: https://codeforces.com/contest/939/submission/321655563

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = [0]+[int(x) for x in input().split()]

    for i in range(1, n):
        if arr[arr[arr[i]]] == i:
            return "YES"
    return "NO"


print(solve())