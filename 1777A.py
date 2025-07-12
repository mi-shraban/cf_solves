# Problem link: https://codeforces.com/problemset/problem/1777/A
# Solve Link: https://codeforces.com/contest/1777/submission/190022581

def solve():
    n = int(input())
    arr = [int(i) for i in input().split()]
    ans = 0
    for i in range(n-1):
        if arr[i] % 2 == arr[i+1] % 2:
            ans += 1
    print(ans)

for i in range(int(input())):
    solve()