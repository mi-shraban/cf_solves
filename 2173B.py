import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    mx, mn = 0, 0
    for i in range(n):
        nmx = max(mx - a[i], b[i]-mn)
        nmn = min(mn - a[i], b[i]-mx)
        mx, mn = nmx, nmn
    return mx


for _ in range(int(input())):
    print_fast(solve())