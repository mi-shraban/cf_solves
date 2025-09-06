import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


# brute force
def solve():
    n = int(input())
    x = n
    while x > 0:
        l = x % 10
        x //= 10
        if l > 0 and n % l != 0:
            n += 1
            x = n
    return n


for _ in range(int(input())):
    print_fast(solve())