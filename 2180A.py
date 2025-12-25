import sys, math


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    l, a, b = [int(x) for x in input().split()]
    ans = l - math.gcd(l, b) + a % math.gcd(l, b)
    return ans
    # logn solve
    
    # seen = set()
    # curr = a
    # mx = 0
    # while curr not in seen:
    #     seen.add(curr)
    #     mx = max(mx, curr)
    #     curr = (curr + b) % l
    # return mx
    # linear solve


for _ in range(int(input())):
    print_fast(solve())