import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    a, b = [int(x) for x in input().split()]
    n = 1
    max_layers = 0

    while True:
        if n & 1:
            sum_odd = (4**((n+1)//2) - 1) // 3
            sum_even = 2 * (4**((n-1)//2) - 1) // 3
        else:
            sum_odd = (4**(n//2) - 1) // 3
            sum_even = 2 * (4**(n//2) - 1) // 3
        
        if (sum_odd <= a and sum_even <= b) or (sum_odd <= b and sum_even <= a):
            max_layers = n
            n += 1
        else:
            break
    return max_layers


for _ in range(int(input())):
    print_fast(solve())