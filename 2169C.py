import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    l, r = 1, n
    sum_left, sum_right = 0, 0
    mn = 0
    for i, x in enumerate(arr):
        sum_left += x
        curr = (i+1) * (i+2) - sum_left
        mn = min(mn, curr)
        sum_right = max(sum_right, curr - mn)
    return sum_left + sum_right


for _ in range(int(input())):
    print_fast(solve())