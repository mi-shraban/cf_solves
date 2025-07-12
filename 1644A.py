# Problem link: https://codeforces.com/problemset/problem/1644/A
# Solve Link: https://codeforces.com/contest/1644/submission/149718510

n = int(input())
for i in range(n):
    s = input()
    if s.find("r") < s.find("R") and s.find("g") < s.find("G") and s.find("b") < s.find("B"):
        print("YES")
    else:
        print("NO")