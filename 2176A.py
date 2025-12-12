import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    cnt = 0
    mx = 0
    for i in range(n):
        mx = max(mx, a[i])
        if a[i] == mx:
            cnt += 1
    ans = n - cnt
    return ans


for _ in range(int(input())):
    print_fast(solve())