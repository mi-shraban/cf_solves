# Problem link: https://codeforces.com/problemset/problem/1469/A
# Solve Link: https://codeforces.com/contest/1469/submission/189870739

def solve():
    s = input()
    n = len(s)
    if n % 2 == 0 and s[0] != ')' and s[-1] != '(':
        return "YES"
    return "NO"

for i in range(int(input())):
    print(solve())