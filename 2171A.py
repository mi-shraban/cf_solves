import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    if n & 1:
        return 0
    return (n // 4) + 1


for _ in range(int(input())):
    print_fast(solve())