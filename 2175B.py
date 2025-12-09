import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, l, r = [int(x) for x in input().split()]
    b = [0] * (n + 1)
    for i in range(1, n+1):
        if i == r:
            b[i] =  l - 1
        else:
            b[i] = i
    a = [i+1 for i in range(n)]
    for i in range(n):
        a[i] = b[i] ^ b[i+1]
    return f"{' '.join(map(str, a))}"


for _ in range(int(input())):
    print_fast(solve())