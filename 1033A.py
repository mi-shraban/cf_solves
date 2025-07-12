# Problem link: https://codeforces.com/problemset/problem/1033/A
# Solve Link: https://codeforces.com/contest/1033/submission/323717887

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    ax, ay = map(int, input().split())
    bx, by = map(int, input().split())
    cx, cy = map(int, input().split())

    if bx < ax and by < ay and cx < ax and cy < ay:
        return "YES"
    elif bx > ax and by < ay and cx > ax and cy < ay:
        return "YES"
    elif bx < ax and by > ay and cx < ax and cy > ay:
        return "YES"
    elif bx > ax and by > ay and cx > ax and cy > ay:
        return "YES"
    else:
        return "NO"


print_fast(solve())