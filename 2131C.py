import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, k = [int(x) for x in input().split()]


for _ in range(int(input())):
    print_fast(solve())

# Not solved