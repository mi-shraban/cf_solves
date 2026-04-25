import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    arr = [int(x) for x in input().split()]
    arr.sort()

    ans = arr[-1]
    for i in range(6):
        ans -= arr[i]
    
    return ans


for _ in range(int(input())):
    print_fast(solve())