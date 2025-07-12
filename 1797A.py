# Problem link: https://codeforces.com/problemset/problem/1797/A
# Solve Link: https://codeforces.com/contest/1797/submission/321896774

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, m = [int(x) for x in input().split()]

    coord = [int(x) for x in input().split()]
    a, b = coord[:2], coord[2:]

    corners = [[1,1], [1, m], [n, 1], [n, m]]
    ans = 4

    if a in corners or b in corners:
        ans = 2
    elif a[0] == 1 or a[0] == n or a[1] == 1 or a[1] == m:
        ans = 3
    elif b[0] == 1 or b[0] == n or b[1] == 1 or b[1] == m:
        ans = 3

    return ans


for _ in range(int(input())):
    print_fast(solve())