import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    
    ans = 1

    for i in range(n):
        ans += max(0, a[i]-b[i])

    return ans


for _ in range(int(input())):
    print_fast(solve())