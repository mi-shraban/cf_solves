import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    x, y = map(int, input().split())
    if x == y or x == y + 1 or y == 1:
        return -1
    elif x < y:
        return 2
    else:
        return 3


for _ in range(int(input())):
    print_fast(solve())