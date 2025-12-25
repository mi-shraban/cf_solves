import sys, math


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    l, a, b = [int(x) for x in input().split()]
    ans = l - math.gcd(l, b) + a % math.gcd(l, b)
    return ans

for _ in range(int(input())):
    print_fast(solve())