import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    k, x = map(int, input().split())
    return k * x + 1


for _ in range(int(input())):
    print_fast(solve())