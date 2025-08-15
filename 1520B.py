import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    if n < 10:
        return n

    tmp = n
    cnt = -1
    while tmp > 0:          # 1 >= tmp >= 10**9 so time complexity O(1)
        tmp //= 10
        cnt += 1

    ans = 9 * cnt
    div = 10**cnt

    while cnt > 0:          # 1 >= cnt >= 9 so time complexity O(1)
        cnt -= 1
        div += 10**cnt

    tmp = int(n/div)
    ans += tmp

    return ans


for _ in range(int(input())):
    print_fast(solve())