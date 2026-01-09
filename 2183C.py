import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, m, k = map(int, input().split())
    if k - 1 < n - k:
        k = n + 1 - k
    l, r = 0, 0
    while True:
        if r < n - k and l + (r + 1) + max(l, r + 1) - 1 <= m:
            r += 1
        if l < k - 1 and r + (l + 1) + max(l + 1, r) - 1 <= m:
            l += 1
        else:
            break
    return l + r + 1


for _ in range(int(input())):
    print_fast(solve())