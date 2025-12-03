import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    if a[0] == -1:
        a[0] = a[n-1]
    if a[n-1] == -1:
        a[n-1] = a[0]
    for i in range(n):
        if a[i] == -1:
            a[i] = 0
    x = abs(a[n-1] - a[0])
    ans = f"{x}\n{' '.join(str(x) for x in a)}"
    return ans


for _ in range(int(input())):
    print_fast(solve())