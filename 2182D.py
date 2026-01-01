import sys, itertools


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    mod = 998244353
    n = int(input())
    a = [int(x) for x in input().split()]
    p = [int(x) for x in range(1, n+1)]
    
    total_decors = sum(a)
    if total_decors == 0:
        f = 1
        for i in range(1, n+1):
            f = (f * i) % mod
        return f

    count = 0

    for perm in itertools.permutations(p):
        rem = a[:]
        valid = True
        for step in range(total_decors):
            person = perm[step % n]
            if rem[person] > 0:
                rem[person] -= 1
            elif rem[0] > 0:
                rem[0] -= 1
            else:
                valid = False
                break
        if valid:
            count += 1
    return count % mod

    
for _ in range(int(input())):
    print_fast(solve())