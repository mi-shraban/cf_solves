import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, x, y = map(int, input().split())
    a = list(map(int, input().split()))
    
    total_loss = 0
    for num in a:
        total_loss += num // x
    
    max_val = 0
    for num in a:
        k_i = num // x
        c = num + y * (total_loss - k_i)
        if c > max_val:
            max_val = c
    return max_val


for _ in range(int(input())):
    print_fast(solve())