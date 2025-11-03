import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    a, b, c, d = [int(x) for x in input().split()]
    if a == b and b == c and c == d:
        return 'YES'
    return 'NO'


for _ in range(int(input())):
    print_fast(solve())