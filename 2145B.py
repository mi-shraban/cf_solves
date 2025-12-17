import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, k = map(int, input().split())
    s = input()
    a, b, c = s.count('0'), s.count('1'), s.count('2')
    ans = ["+"] * n
    for i in range(n):
        if i < a + c or i >= n - b - c:
            ans[i] = '?'
        if i < a or i >= n - b or k == n:
            ans[i] = '-'
    return "".join(ans)


for _ in range(int(input())):
    print_fast(solve())