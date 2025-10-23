import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def sieve():
    primes = [1]*1007
    primes[0] = primes[1] = 0
    p = 2
    while p*p <= 1007:
        if primes[p]:
            for i in range(p*p, 1007, p):
                primes[i] = 0
        p += 1
    prime_numbers = []
    for i in range(1007):
        if primes[i]:
            prime_numbers.append(i)
    return primes, prime_numbers


def solve():
    primes, prime_numbers = sieve()
    n, k = [int(x) for x in input().split()]
    ans = 0
    for i in range(len(primes)-1):
        # print(prime_numbers[i] + prime_numbers[i+1] + 1)
        # print(primes[prime_numbers[i] + prime_numbers[i+1] + 1])
        if prime_numbers[i] + prime_numbers[i+1] + 1 <= n:
            if primes[prime_numbers[i] + prime_numbers[i+1] + 1]:
                ans += 1
        else:
            break
    if ans >= k:
        return 'YES'
    return 'NO'


# for _ in range(int(input())):
print_fast(solve())