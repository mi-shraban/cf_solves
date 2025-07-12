# Problem link: https://codeforces.com/problemset/problem/1791/C
# Solve Link: https://codeforces.com/contest/1791/submission/191941755

def solve():
    n = int(input())
    s = [int(x) for x in input()]
    ans = n
    while len(s) != 0 and s[0] != s[-1]:
        s = s[1:len(s)-1]
        ans -= 2
    print(ans)


for i in range(int(input())):
    solve()