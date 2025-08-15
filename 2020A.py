import sys
import math


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, k = [int(x) for x in input().split()]
    if k > n or k == 1:
        return n
    cnt = 0
    while n-k > 0:
        pwr = int(math.log(n, k))
        n -= k**pwr
        cnt += 1
    return cnt + n


for _ in range(int(input())):
    print_fast(solve())

# WA on test 2
