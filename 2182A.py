import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def create_ny(n, s):
    mn = 10**19+7
    for i in range(n-3):
        cost = 0
        target = "2026"
        for j in range(4):
            if s[i + j] != target[j]:
                cost += 1
        mn = min(cost, mn)
    return mn


def remove_oy(n, s):
    cnt = 0
    for i in range(n-3):
        if s[i : i + 4] == '2025':
            cnt += 1
    return cnt


def solve():
    n = int(input())
    s = input()
    create_cost = create_ny(n, s)
    remove_cost = remove_oy(n, s)

    return min(create_cost, remove_cost)


for _ in range(int(input())):
    print_fast(solve())