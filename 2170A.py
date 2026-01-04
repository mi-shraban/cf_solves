import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    ans = 1
    if n == 2:
        ans = 9
    elif n == 3 or n == 4:
        ans = 4 * n * n - n - 4
    elif n > 4:
        ans = 5 * n * n - 5 * n - 5
    return ans


for _ in range(int(input())):
    print_fast(solve())