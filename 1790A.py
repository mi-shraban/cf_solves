# Problem link: https://codeforces.com/problemset/problem/1790/A
# Solve Link: https://codeforces.com/contest/1790/submission/190779639

def solve():
    n = input()
    pi = "314159265358979323846264338327"
    count = 0
    for i in range(len(n)):
        if n[i] != pi[i]:
            return i
    return len(n)


for i in range(int(input())):
    print(solve())