# Problem link: https://codeforces.com/problemset/problem/1774/A
# Solve Link: https://codeforces.com/contest/1774/submission/187691514

def solve():
    n = int(input())
    s = input()
    sum = 0
    if s[0] == '1':
        sum = 1
    ans = ""
    for i in range(1, n):
        if s[i] == '1':
            if sum == 1:
                ans += '-'
                sum -= 1
            else:
                ans += '+'
                sum += 1
        else:
            ans += '+'
    print(ans)


for i in range(int(input())):
    solve()