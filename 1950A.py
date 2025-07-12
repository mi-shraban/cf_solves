# Problem link: https://codeforces.com/problemset/problem/1950/A
# Solve Link: https://codeforces.com/contest/1950/submission/253658244

import sys


def input():
    return sys.stdin.readline().strip()


def solve():
    a, b, c = [int(x) for x in input().split()]
    if a < b < c:
        sys.stdout.write('STAIR\n')
    elif a < b > c:
        sys.stdout.write('PEAK\n')
    else:
        sys.stdout.write('NONE\n')


for t in range(int(input())):
    solve()