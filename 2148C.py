import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, m = [int(x) for x in input().split()]
    a, b = 0, 0
    ans = 0
    for i in range(n):
        ai, bi = [int(x) for x in input().split()]
        ans += ai - a
        if (ai - a + 2) % 2 != (bi - b + 2) % 2:
            ans -= 1
        a = ai
        b = bi
    if a != m:
        ans += m - a
    return ans


for _ in range(int(input())):
    print_fast(solve())