# Problem link: https://codeforces.com/problemset/problem/1792/A
# Solve Link: https://codeforces.com/contest/1792/submission/190415322

from math import ceil


def solve(n):
    h = [int(x) for x in input().split()]
    x = sorted(h).count(1)
    count = ceil(x/2)
    count += (n-x)
    return count


for i in range(int(input())):
    print(solve(n=int(input())))