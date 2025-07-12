# Problem link: https://codeforces.com/problemset/problem/1399/A
# Solve Link: https://codeforces.com/contest/1399/submission/188975629

def solve():
    n = int(input())
    a = [int(i) for i in input().split()]
    a = sorted(a)
    ans = ""
    if n == 1:
        ans = "YES"
    for i in range(n-1):
        if abs(a[i] - a[i+1]) > 1:
            ans = "NO"
            break
        else:
            ans = "YES"
    print(ans)
    

for i in range(int(input())):
    solve()