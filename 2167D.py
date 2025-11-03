import sys

def input():
    return sys.stdin.readline().strip()

def print_fast(x):
    sys.stdout.write(f"{x}\n")

def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53]
    for x in primes:
        for y in arr:
            if y % x:
                return x
    return -1

for _ in range(int(input())):
    print_fast(solve())