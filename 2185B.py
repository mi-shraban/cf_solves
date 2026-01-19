import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    ans = max(a) * n
    return ans


for _ in range(int(input())):
    print_fast(solve())