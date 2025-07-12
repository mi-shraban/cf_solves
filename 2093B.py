# Problem link: https://codeforces.com/problemset/problem/2093/B
# Solve Link: https://codeforces.com/contest/2093/submission/316204479

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(x)


def solve():
    n = input()
    pos = False
    l_zeros = 0

    for x in n[::-1]:
        if x != '0':
            pos = True
        elif pos:
            l_zeros += 1

    print(f"{len(n) - l_zeros - 1}\n")


for _ in range(int(input())):
    solve()