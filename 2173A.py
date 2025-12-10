import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, k = [int(x) for x in input().split()]
    s = input()
    ic = None
    ans = 0
    for i in range(n):
        if s[i] == '1':
            ic = i
        if s[i] == '0':
            if ic is None or i - k > ic:
                ans += 1
    return ans


for _ in range(int(input())):
    print_fast(solve())