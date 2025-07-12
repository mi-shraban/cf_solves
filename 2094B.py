# Problem link: https://codeforces.com/problemset/problem/2094/B
# Solve Link: https://codeforces.com/contest/2094/submission/316085051

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    sys.stdout.write(x)


def round(f):
    if f - int(f) < 0.5:
        return int(f)
    else:
        return int(f) + 1


def solve():
    n, m, l, r = [int(x) for x in input().split(' ')]

    l_prime, r_prime = 0, 0
    seg = 0

    while l_prime > l and seg != m:
        l_prime -= 1
        seg += 1

    while r_prime < r and seg != m:
        r_prime += 1
        seg += 1

    print(f"{l_prime} {r_prime}\n")


for _ in range(int(input())):
    solve()