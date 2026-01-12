import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    freq = {}
    for x in a:
        freq[x] = freq.get(x, 0) + 1
    cnt = 0
    for k, v in freq.items():
        if k > v:
            cnt += v
        else:
            cnt += v - k
    return cnt


for _ in range(int(input())):
    print_fast(solve())