import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    return f"0 0 {n}"


print_fast(solve())

# wow ;-; I missed "each Fibonacci number", and
# "three not necessary different Fibonacci numbers"
# while reading the problem the first time
# sighh