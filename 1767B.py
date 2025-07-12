# Problem link: https://codeforces.com/problemset/problem/1767/B
# Solve Link: https://codeforces.com/contest/1767/submission/187689656

def solve():
    n = int(input())
    a = [int(i) for i in input().split()]
    x = a[0]
    a = sorted(a[1:])
    for i in range(n-1):
        if a[i] > x:
            x += (a[i]-x+1)//2
    print(x)

for i in range(int(input())):
    solve()