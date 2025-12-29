import sys
from math import gcd


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    w, h, d = map(int, input().split())
    n = int(input())
    
    wp = gcd(n, w)
    nw = n // wp

    hp = gcd(nw, h)
    nh = nw // hp

    dp = gcd(nh, d)
    nd = nh // dp

    if nd != 1:
        return "-1"
    return f"{wp -1} {hp -1} {dp -1}"


print_fast(solve())