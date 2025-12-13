import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input()) * 2
    s = input()
    s += s      # make it kind of cyclic
    curr, res = 0, 0
    for i in range(n):
        if s[i] == '1':
            curr = 0
        else:
            curr += 1
        res = max(res, curr)
    return res


for _ in range(int(input())):
    print_fast(solve())