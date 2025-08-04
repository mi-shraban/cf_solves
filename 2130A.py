import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    s = [int(x) for x in input().split()]
    freq = [0 for i in range(55)]
    for x in s:
        freq[x] += 1

    ans = 0

    for mex in range(55):
        pos = True
        for i in range(mex):
            if freq[i] == 0:
                break
        if pos:
            ans += mex
            for i in range(mex):
                freq[i] -= 1
        else:
            break


for _ in range(int(input())):
    print_fast(solve())


# unsolved