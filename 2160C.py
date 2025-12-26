import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    nb = bin(n)[2:]
    for i in range(1, 64):
        if len(nb) <= i:
            xfx = nb.zfill(i)
            B = xfx == xfx[::-1]
            if i % 2 == 1:
                B = B and xfx[i//2] == '0'
            if B:
                return 'YES'
    return 'NO'


for _ in range(int(input())):
    print_fast(solve())