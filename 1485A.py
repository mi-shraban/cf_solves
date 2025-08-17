import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    a, b = [int(x) for x in input().split()]
    cnt = 0
    if not a:
        return 0
    if b < 2:
        b += 1
        cnt += 1
    while a:
        a //= b
        cnt += 1

    return cnt


for _ in range(int(input())):
    print_fast(solve())

# doesnt work yet ;-;