import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    parity = set()
    for x in arr:
        parity.add(x % 2)
    if len(parity) == 2:
        return f"{' '.join(map(str, sorted(arr)))}"
    return f"{' '.join(map(str, arr))}"


for _ in range(int(input())):
    print_fast(solve())