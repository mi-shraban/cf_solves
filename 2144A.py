import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    x, n = [int(x) for x in input().split()]
    if n & 1:
        return x
    return 0


for _ in range(int(input())):
    print_fast(solve())