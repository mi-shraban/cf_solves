import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    s = input()
    return n - s.count(s[-1])


for _ in range(int(input())):
    print_fast(solve())