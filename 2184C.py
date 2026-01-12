import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, k = map(int, input().split())
    if k > n:
        return -1
    memo = {}
    def dfs(x):
        if x == k:
            return 0
        if x < k:
            return float('inf')
        if x in memo:
            return memo[x]
        
        l = x // 2
        r = (x + 1) // 2

        res = 1 + min(dfs(l), dfs(r))
        memo[x] = res
        return res
    
    return dfs(n) if dfs(n) != float('inf') else -1


for _ in range(int(input())):
    print_fast(solve())
