import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = set(int(x) for x in input().split())
    return len(a)*2 - 1


for _ in range(int(input())):
    print_fast(solve())