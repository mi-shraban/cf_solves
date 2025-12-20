import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    moves = 0
    mx = 0
    for x in a:
        if x == 1:
            moves += 1
        if x > mx:
            mx = x
    if mx > 1:
        moves += 1
    return "Alice" if moves % 2 == 1 else "Bob"

for _ in range(int(input())):
    print_fast(solve())