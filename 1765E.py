# Problem link: https://codeforces.com/problemset/problem/1765/E
# Solve Link: https://codeforces.com/contest/1765/submission/187621331

def solve():
    n, a, b = [int(i) for i in input().split()]
    if a>b:
        print(1)
    else:
        print((n+a-1)//a)

for i in range(int(input())):
    solve()