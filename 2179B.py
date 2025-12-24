import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    total_time = 0
    for i in range(n-1):
        total_time += abs(a[i] - a[i+1])
    min_time = 10**18+7
    for i in range(n):
        if i == 0:
            time = total_time - abs(a[0] - a[1])
        elif i == n-1:
            time = total_time - abs(a[n-2] - a[n-1])
        else:
            left_mid = abs(a[i-1] - a[i])
            right_mid = abs(a[i] - a[i+1])
            new_mid = abs(a[i-1] - a[i+1])
            time = total_time - left_mid - right_mid + new_mid
        if time < min_time:
            min_time = time
    return min_time


for _ in range(int(input())):
    print_fast(solve())