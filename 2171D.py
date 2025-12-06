import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    p = [int(x) for x in input().split()]
    pref, suff = [n] * n, [0] * n
    for i in range(n):
        pref[i] = min(pref[i-1], p[i]) if i > 0 else p[i]
    for i in range(n - 1, -1, -1):
        suff[i] = max(suff[i + 1], p[i]) if i < n - 1 else p[i]
    for i in range(n-1, 0, -1):
        if pref[i-1] > suff[i]:
            return 'NO'
    return 'YES'


for _ in range(int(input())):
    print_fast(solve())