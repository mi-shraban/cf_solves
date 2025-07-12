# Problem link: https://codeforces.com/problemset/problem/2065/B
# Solve Link: https://codeforces.com/contest/2065/submission/305579072

def solve():
    s = input()
    p = False
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            p = True

    if p:
        print(1)
    else:
        print(len(s))


for t in range(int(input())):
    solve()