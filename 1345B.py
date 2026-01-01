import sys, math


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def max_h(n):
    d = 1 + 24 * n
    h = int((-1 + math.sqrt(d)) / 6)
    while h > 0:
        needed = (3 * h * h + h) // 2
        if needed <= n:
            return h
        h -= 1
    return 0


def cards_count(h):
    return (3 * h * h + h)//2


def solve():
    n = int(input())
    cnt = 0
    while n >= 2:
        h = max_h(n)
        if h == 0:
            break
        cards_used = cards_count(h)
        n -= cards_used
        cnt += 1
    return cnt    


for _ in range(int(input())):
    print_fast(solve())