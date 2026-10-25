import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    a, b = map(int, input().split())
    if a <= b:
        return -1
    else:
        return min((a-b), b)


for _ in range(int(input())):
    print_fast(solve())