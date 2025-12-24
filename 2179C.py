import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mn = min(a)
    a.remove(mn)
    mn2 = min(a)
    if mn2 > 2 * mn:
        return mn2 - mn
    return mn


for _ in range(int(input())):
    print_fast(solve())