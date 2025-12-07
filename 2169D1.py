import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


INF = 10**12 + 1


def solve():
    x, y, k = [int(x) for x in input().split()]
    l, r = 1, INF
    while l <= r:
        mid = l + (r - l) // 2
        z = mid - 1
        for i in range(x):
            z -= z // y
        if z + 1 > k:
            r = mid - 1
        else:
            l = mid + 1
    if r == INF:
        return -1
    return r


for _ in range(int(input())):
    print_fast(solve())