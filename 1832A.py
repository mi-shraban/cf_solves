# Problem link: https://codeforces.com/problemset/problem/1832/A
# Solve Link: https://codeforces.com/contest/1832/submission/206608342

def solve():
    s = input()
    frq = {s[i]: s.count(s[i]) for i in range(len(s)//2)}

    if len(frq) == 1:
        print("NO")
    else:
        print("YES")


for i in range(int(input())):
    solve()