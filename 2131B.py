import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    if n == 1:
        return [0]

    a = [-1, 3] * (n//2)

    if n & 1:
        a.append(-1)
    else:
        a[-1] = 2

    print(*a)


for _ in range(int(input())):
    solve()
