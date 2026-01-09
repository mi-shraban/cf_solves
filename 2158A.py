import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    y, r = map(int, input().split())    
    return min(n, r + y // 2)


for _ in range(int(input())):
    print_fast(solve())