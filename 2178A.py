import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    s = input()
    if s.count('Y') <= 1:
        return 'YES'
    return 'NO'


for _ in range(int(input())):
    print_fast(solve())