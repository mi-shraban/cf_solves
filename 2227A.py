import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    x, y = [int(x) for x in input().split()]
    if x % 2 and y % 2:
        return 'NO'
    return 'YES'


for _ in range(int(input())):
    print_fast(solve())