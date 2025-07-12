# Problem link: https://codeforces.com/problemset/problem/1714/C
# Solve Link: https://codeforces.com/contest/1714/submission/166876202

def solve():
    s = int(input())
    ans = []
    while s != 0:
        for i in range(9, -1, -1):
            if s - i >= 0 and i not in ans:
                ans.append(i)
                s -= i
    
    result = ""
    for x in ans:
        result += str(x)
    print(int(result[::-1]))

t = int(input())
for _ in range(t):
    solve()