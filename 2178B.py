import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    r = [x for x in input()]
    n = len(r)
    cost = 0
    if r[0] == 'u':
        r[0] = 's'
        cost += 1
    if r[n-1] == 'u':
        r[n-1] = 's'
        cost += 1

    for i in range(1, n-1):
        if r[i] == 'u' and r[i + 1] == 'u':
            r[i + 1] = 's'
            cost += 1
    
    return cost


for _ in range(int(input())):
    print_fast(solve())