import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [x for x in input().split(' ')]
    ans = ""
    for i in range(n):
        ans = min(ans + a[i], a[i] + ans)
    return ans


for _ in range(int(input())):
    print_fast(solve())