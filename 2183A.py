import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    if a[0] + a[n-1] == 0:
        return "Bob"
    return "Alice"



for _ in range(int(input())):
    print_fast(solve())