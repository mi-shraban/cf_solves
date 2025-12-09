import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    d = set(a)
    n1 = len(d)
    if n1 in d:
        return n1
    else:
        while n1 not in d:
            n1 += 1
        return n1


for _ in range(int(input())):
    print_fast(solve())