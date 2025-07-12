# Problem link: https://codeforces.com/problemset/problem/1633/A
# Solve Link: https://codeforces.com/contest/1633/submission/145167635

t = int(input())
for i in range(t):
    n = int(input())
    if n % 7 == 0:
        print(n)
    else:
        ans = -1
        for j in range(10):
            if (n - n % 10 + j) % 7 == 0:
                ans = n - n % 10 + j
        print(ans)
        