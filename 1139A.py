# Problem link: https://codeforces.com/problemset/problem/1139/A
# Solve Link: https://codeforces.com/contest/1139/submission/193961124

def solve():
    n = int(input())
    a = [int(x) for x in input()]

    ans = 0
    for i, x in enumerate(a):
        if (x - 0) % 2 == 0:
            ans += i+1
    print(ans)


solve()