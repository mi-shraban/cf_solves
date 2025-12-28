import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    pref = [0] * (n+1)
    suff = [0] * n

    for i in range(1, n):
        pref[i + 1] = pref[i] + abs(a[i])
    for i in range(n-1, 0, -1):
        suff[i - 1] = suff[i] - a[i]

    ans = suff[0]
    for i in range(1, n):
        ans = max(ans, a[0] + pref[i] + suff[i])
    return ans


for _ in range(int(input())):
    print_fast(solve())