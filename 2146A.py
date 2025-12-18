import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    ht = {}
    for x in a:
        ht[x] = ht.get(x, 0) + 1
    freq = sorted(list(ht.values()))
    nn = len(freq)
    mx = 0
    for i in range(nn):
        mx = max(mx, freq[i] * (nn - i))
    return mx


for _ in range(int(input())):
    print_fast(solve())