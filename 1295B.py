import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


# brute force
def solve():
    n = int(input())
    a = set(int(x) for x in input().split())
    ans = 0
    while a:
        c = a.pop()
        if c % 2 == 0:
            ans += 1
            a.add(c//2)
    return ans


for _ in range(int(input())):
    print_fast(solve())