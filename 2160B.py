import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    b = [0] + [int(x) for x in input().split()]
    a = []
    for i in range(n):
        diff = b[i+1] - b[i]
        if i - diff >= 0:
            a.append(a[i-diff])
        else:
            a.append(i+1)
    return ' '.join(str(x) for x in a)


for _ in range(int(input())):
    print_fast(solve())