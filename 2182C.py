import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    c = [int(x) for x in input().split()]

    valid_ab = 0
    for i in range(n):
        ok = True
        for j in range(n):
            if a[j] >= b[(i + j) % n]:
                ok = False
                break
        if ok:
            valid_ab += 1
    
    valid_bc = 0
    for i in range(n):
        ok = True
        for j in range(n):
            if b[j] >= c[(i + j) % n]:
                ok = False
                break
        if ok:
            valid_bc += 1
    
    return n * valid_ab * valid_bc



for _ in range(int(input())):
    print_fast(solve())