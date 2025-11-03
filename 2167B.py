import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    s, t = input().split()
    dct = {}
    for x in s:
        dct[x] = dct.get(x, 0) + 1
    for x in t:
        if x not in dct or dct[x] == 0:
            return 'NO'
        dct[x] -= 1
    if sum(dct.values()) == 0:
        return 'YES'
    else:
        return 'NO'


for _ in range(int(input())):
    print_fast(solve())