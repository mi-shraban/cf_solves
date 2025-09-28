import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    k, n, w = [int(x) for x in input().split()]
    money = w*(w+1)//2
    ans = k * money - n
    return max(ans, 0)


# for _ in range(int(input())):
print_fast(solve())