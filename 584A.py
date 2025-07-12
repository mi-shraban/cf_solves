# Problem link: https://codeforces.com/problemset/problem/584/A
# Solve Link: https://codeforces.com/contest/584/submission/185420724

n, t = [int(i) for i in input().split()]
ans = int("9"*n)
if t > ans:
    ans = -1
else:
    while ans % t != 0:
        ans -= 1
print(ans)