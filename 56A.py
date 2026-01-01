import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    alcohols = ["ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"]
    cnt = 0
    for i in range(n):
        x = input()
        try:
            x = int(x)
            if x < 18:
                cnt += 1
        except Exception:
            if x in alcohols:
                cnt += 1
    return cnt


print_fast(solve())