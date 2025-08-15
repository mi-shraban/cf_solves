import sys
import math


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    p = [0] + [int(x) for x in input().split()]

    ans = 0
    for i in range(1, n+1):
        ans = math.gcd(ans, abs(p[i] - i))
    return ans


for _ in range(int(input())):
    print_fast(solve())