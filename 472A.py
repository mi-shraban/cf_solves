import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    if not n & 1:
        x = 4   # first even composite
        y = n - x
    else:
        x = 9   # first odd composite
        y = n - x

    return f"{x} {y}"


print_fast(solve())