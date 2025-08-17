import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    mn = min(arr)
    if mn == 1:
        return 1

    for x in arr:
        if x % mn != 0:
            return -1
    return mn


print_fast(solve())