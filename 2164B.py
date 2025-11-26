import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    st = set(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] < arr[j] and arr[j] % arr[i] & 1 == 0:
                return f"{arr[i]} {arr[j]}"
    return -1


for _ in range(int(input())):
    print_fast(solve())