import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    a, b, n = map(int, input().split())
    if b*n <= a or b >= a:
        return 1
    else:
        return 2


for _ in range(int(input())):
    print_fast(solve())