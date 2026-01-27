import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, q = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()] + [0]
    b = [int(x) for x in input().split()]
    for i in range(n-1, -1, -1):
        a[i] = max(a[i + 1], b[i], a[i])
    for i in range(1, n):
        a[i] += a[i - 1]
    res = []
    for i in range(q):
        l, r = [int(x) - 1 for x in input().split()]
        res.append(a[r] - (a[l - 1] if l > 0 else 0))
    return f"{' '.join(map(str, res))}"


for _ in range(int(input())):
    print_fast(solve())