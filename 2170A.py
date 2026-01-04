import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def lookup(grid, i, j, n):
    up = grid[i-1][j] if i - 1 >= 0 else 0
    down = grid[i+1][j] if i + 1 < n else 0
    left = grid[i][j - 1] if j - 1 >= 0 else 0
    right = grid[i][j + 1] if j + 1 < n else 0
    return up + down + left + right + grid[i][j]


def solve():
    n = int(input())
    grid = []
    temp = []
    for i in range(1, n ** 2 + 1):
        temp.append(i)
        if i % n == 0:
            grid.append(temp)
            temp = []
    mx = 0
    for i in range(n-1, -1, -1):
        for j in range(n-1, -1, -1):
            mx = max(mx, lookup(grid, i, j, n))
    return mx
    # O(n^2) but max n is 100. So, meh! 10000!! 
    # Which also never happens cause checking from back for max sum in a sorted grid.


for _ in range(int(input())):
    print_fast(solve())


# math solution O(1)
# ans = 1
# if n == 2:
#     ans = 9
# elif n == 3 or n == 4:
#     ans = 4 * n * n - n - 4
# elif n > 4:
#     ans = 5 * n * n - 5 * n - 5
# return ans