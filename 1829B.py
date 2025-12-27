import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    mx = 0
    sq = 0
    for x in a:
        if x == 0:
            sq += 1
        if x == 1:
            mx = max(sq, mx)
            sq = 0
    return max(sq, mx)


for _ in range(int(input())):
    print_fast(solve())