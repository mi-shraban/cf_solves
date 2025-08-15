import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    l, r = [int(x) for x in input().split()]
    if 2*l > r:
        return f"-1 -1"

    r -= r % l
    return f"{l} {r}"


for _ in range(int(input())):
    print_fast(solve())