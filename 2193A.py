import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, s, x = map(int, input().split())
    a = list(map(int, input().split()))
    sm = sum(a)
    if sm == s or (s > sm and (s - sm) % x == 0):
        return "YES"
    return "NO"


for _ in range(int(input())):
    print_fast(solve())