import sys
import math


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    w, h, d = map(int, input().split())
    n = int(input())
    wc = math.gcd(w, n)
    nw = n // wc
    print(nw)
    hc = math.gcd(h, n)
    nh = nw // hc
    print(nh)
    dc = math.gcd(d, n)
    nd = nh //dc
    print(dc)



print_fast(solve())