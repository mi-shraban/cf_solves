import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


max_n = 30
C = [[0] * (max_n + 1) for _ in range(max_n + 1)]
for i in range(max_n + 1):
    C[i][0] = 1
    if i > 0:
        C[i][i] = 1
    for j in range(1, i):
        C[i][j] = C[i-1][j-1] + C[i-1][j]


def solve():
    n, k = map(int, input().split())
    d = n.bit_length() - 1
    count = 0

    for i in range(1, d + 1):
        for j in range(1, i + 1):
            if i + j > k + 1:
                count += C[i - 1][j - 1]

    if d + 2 > k + 1:
        count += 1
    return count


for _ in range(int(input())):
    print_fast(solve())