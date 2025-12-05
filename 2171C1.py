import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    idx = 0
    xv = 0
    for i in range(n):
        if (a[i] ^ b[i]):
            idx = i
        xv ^= a[i]
        xv ^= b[i]
    if xv == 0:
        return 'Tie'
    else:
        if idx & 1:
            return 'Mai'
        return 'Ajisai'


for _ in range(int(input())):
    print_fast(solve())