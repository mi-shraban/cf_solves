# Problem link: https://codeforces.com/problemset/problem/1020/B
# Solve Link: https://codeforces.com/contest/1020/submission/323715665

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    p = [int(x)-1 for x in input().split()]

    result = []
    for i in range(n):
        visited = [False]*n
        current = i
        while not visited[current]:
            visited[current] = True
            current = p[current]
        result.append(current+1)

    x = f"{' '.join(map(str, result))}"
    return x


for _ in range(1):
    print_fast(solve())