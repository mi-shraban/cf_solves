# Problem link: https://codeforces.com/problemset/problem/1363/A
# Solve Link: https://codeforces.com/contest/1363/submission/193959804

def oddCount(arr):
    c = 0
    for x in arr:
        if x % 2 == 1:
            c += 1
    return c


def evenCount(arr):
    c = 0
    for x in arr:
        if x % 2 == 0:
            c += 1
    return c


def solve():
    n, x = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]

    o, e = oddCount(a), evenCount(a)

    m = min(e, x-1)
    d = x - m

    if d % 2 == 0:
        d += 1
    if o >= d and d <= x:
        print('Yes')
    else:
        print('No')


for i in range(int(input())):
    solve()