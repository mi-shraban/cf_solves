import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    x = int(input())
    if min(a) <= x and max(a) >= x:
        return 'YES'
    else:
        return 'NO'


for _ in range(int(input())):
    print_fast(solve())