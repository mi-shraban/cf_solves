import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def isPrime(x):
    if x <= 1:
        return False
    for i in range(2, int(x**0.5)+1):
        if x % i == 0:
            return False
    return True


def solve():
    x, k = [int(i) for i in input().split()]
    if x > 1 and k > 1:
        return "No"
    elif k == 1:
        if isPrime(x):
            return "YES"
        return "NO"
    elif x == 1 and k == 2:
        return "yes"
    else:
        return "no"


for _ in range(int(input())):
    print_fast(solve())