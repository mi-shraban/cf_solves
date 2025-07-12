# Problem link: https://codeforces.com/problemset/problem/1791/B
# Solve Link: https://codeforces.com/contest/1791/submission/191916384

def solve():
    n = int(input())
    s = input()
    x, y = 0, 0
    for i in s:
        if i == 'U':
            y += 1
        elif i == 'D':
            y -= 1
        elif i == 'R':
            x += 1
        elif i == 'L':
            x -= 1
        if x == 1 and y == 1:
            return "YES"
    return 'NO'


for i in range(int(input())):
    print(solve())