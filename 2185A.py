import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    ans = [x for x in range(1, n + 1)]
    return f"{' '.join(map(str, ans))}"


for _ in range(int(input())):
    print_fast(solve())