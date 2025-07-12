# Problem link: https://codeforces.com/problemset/problem/1792/B
# Solve Link: https://codeforces.com/contest/1792/submission/194479458

def solve():
    a1, a2, a3, a4 = [int(x) for x in input().split()]
    if a1 == 0:
        ans = 1
    else:
        ans = a1 + min(a2, a3)*2 + min(a1 + 1, abs(a2 - a3) + a4)
    print(ans)


for _ in range(int(input())):
    solve()