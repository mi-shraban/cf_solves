import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    if n % 3:
        return 3 - n % 3
    return 0


for _ in range(int(input())):
    print_fast(solve())