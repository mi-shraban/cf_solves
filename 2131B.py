import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [2] * n
    for i in range(1, n, 2):
        a[i] = -1

    print(*a)


for _ in range(int(input())):
    solve()