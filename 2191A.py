import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    cnt = 0
    for i in range(n):
        # checking parity of index and elements
        if a[i] % 2 != (i + 1) % 2:
            cnt += 1
    
    # if all match or none match, print YES
    return "YES" if cnt == 0 or cnt == n else "NO"


for _ in range(int(input())):
    print_fast(solve())