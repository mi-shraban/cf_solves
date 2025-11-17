import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, a = [int(x) for x in input().split()]
    v = [int(x) for x in input().split()]
    bob, alice = 0, 0
    for x in v:
        if a > x:
            alice += 1
        if a < x:
            bob += 1
    if alice > bob:
        return a-1
    return a+1


for _ in range(int(input())):
    print_fast(solve())