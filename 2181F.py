import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    moves = a.count(1)
    if max(a) > 1:
        moves += 1
    return "Alice" if moves % 2 == 1 else "Bob"

for _ in range(int(input())):
    print_fast(solve())