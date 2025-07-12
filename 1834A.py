# Problem link: https://codeforces.com/problemset/problem/1834/A
# Solve Link: https://codeforces.com/contest/1834/submission/216931531

def solve():
    n = int(input())
    a = [int(x) for x in input().split()]

    pos = a.count(1)
    neg = a.count(-1)

    ans = 0

    while neg > pos:
        ans += 1
        neg -= 1
        pos += 1

    if neg & 1:
        ans += 1

    print(ans)


for t in range(int(input())):
    solve()