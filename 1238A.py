import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    x, y = [int(x) for x in input().split()]
    if x - y > 1:
        return 'YES'
    return 'NO'


for _ in range(int(input())):
    print_fast(solve())