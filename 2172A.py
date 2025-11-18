import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    gcl = [int(x) for x in input().split()]
    gcl.sort()
    if gcl[-1] - gcl[0] >= 10:
        return 'check again'
    else:
        return f'final {gcl[1]}'
    
# for _ in range(int(input())):
print_fast(solve())