import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]

    a.sort()
    for i in range(1, n-1):
        if a[i-1] + a[i] > a[i+1]:
            return "Yes"
    return "No"


for _ in range(1):
    print_fast(solve())