import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())

    cnt = n//2
    ans = [2]*(n//2)

    if n & 1:
        ans[-1] = 3

    print_fast(cnt)
    print(*ans)


solve()