import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    if n <= 3:
        return n
    else:
        return n % 2


for _ in range(int(input())):
    print_fast(solve())