# Problem link: https://codeforces.com/problemset/problem/1950/C
# Solve Link: https://codeforces.com/contest/1950/submission/253776167

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    return sys.stdout.write(x+'\n')


def solve():
    hh, mm = [int(x) for x in input().split(':')]

    period = 'PM'
    if hh < 12:
        period = 'AM'

    hh = hh % 12
    if hh == 0:
        hh = 12

    print(f"{hh:02}:{mm:02} {period}")


for t in range(int(input())):
    solve()