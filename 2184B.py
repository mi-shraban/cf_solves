import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    s, k, m = map(int, input().split())
    tf = m // k
    rem = m - tf * k
    
    if s <= k or tf % 2 == 0:
        r = s
    else:
        r = k
    ans = max(0, r - rem)
    return ans
        
    
for _ in range(int(input())):
    print_fast(solve())