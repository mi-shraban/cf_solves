import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = []
    for i in range(n, 0, -1):
        arr.append(str(i))
    arr.append(str(n))
    for i in range(1, n):
        arr.append(str(i))
    return ' '.join(arr)


for _ in range(int(input())):
    print_fast(solve())