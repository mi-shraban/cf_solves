# Problem link: https://codeforces.com/problemset/problem/1780/A
# Solve Link: https://codeforces.com/contest/1780/submission/190758506

def solve():
    n = int(input())
    a = [int(i) for i in input().split()]
    odd, even = [], []
    for idx, elem in enumerate(a):
        if len(odd) >=1 and len(even) >=2:
            break
        if elem % 2 == 0:
            even.append(idx + 1)
        else:
            odd.append(idx + 1)
    if len(odd) >= 3:
        return f"YES\n{odd[0]} {odd[1]} {odd[2]}"
    elif len(odd) >= 1 and len(even) >= 2:
        return f"YES\n{odd[0]} {even[0]} {even[1]}"
    else:
        return "NO"
 
 
for i in range(int(input())):
    print(solve())