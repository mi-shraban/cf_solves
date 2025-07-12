# Problem link: https://codeforces.com/problemset/problem/1833/A
# Solve Link: https://codeforces.com/contest/1833/submission/207502587

def solve():
    n = int(input())
    s = input()
    freq_mel = {s[i]+s[i+1]: 1 for i in range(n-1)}
    print(len(freq_mel))


for _ in range(int(input())):
    solve()