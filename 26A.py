import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


N = 3001
sieve = [0] * (N+1)


def sieveFunc():
    for i in range(2, N + 1, 1):
        if sieve[i] == 0:
            step = i
            for j in range(i, N+1, step):
                sieve[j] += 1


sieveFunc()


def solve():
    n = int(input())
    cnt = 0
    for i in range(n+1):
        if sieve[i] == 2:
            cnt += 1
    return cnt


print_fast(solve())