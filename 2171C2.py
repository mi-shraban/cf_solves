import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    xv = 0
    for i in range(n):
        xv ^= a[i]
        xv ^= b[i]
    if xv == 0:
        return 'Tie'
    msb = 0
    for i in range(32):
        if xv & 1 << i:
            msb = i
    idx = 0
    for i in range(n):
        if (a[i] ^ b[i]) & 1 << msb:
            idx = i
    if idx % 2 == 0:
        return 'Ajisai'
    return 'Mai'


for _ in range(int(input())):
    print_fast(solve())