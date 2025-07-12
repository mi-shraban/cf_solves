# Problem link: https://codeforces.com/problemset/problem/1055/A
# Solve Link: https://codeforces.com/contest/1055/submission/322574978

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, s = [int(x) for x in input().split()]
    s -= 1
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]

    h = [1]*n
    for i in range(1, n):
        h[i] = a[i] & b[i]

    if a[0] == 1 and a[s] == 1:
        return 'yes'
    elif a[0] == 1 and a[s] != 1:
        if 1 in h[s:]:
            if b[s] == 1:
                return 'yes'
            else:
                return 'no'
        else:
            return 'no'
    else:
        return 'no'


print_fast(solve())