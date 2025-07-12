# Problem link: https://codeforces.com/problemset/problem/1352/A
# Solve Link: https://codeforces.com/contest/1352/submission/175250916

for i in range(int(input())):
    n = int(input())
    pwr = 0
    ans = []
    while n!=0:
        if n%10 != 0:
            ans.append(n%10*10**pwr)
        pwr += 1
        n //= 10
    print(len(ans))
    for x in ans:
        print(x, end=" ")  
    print()