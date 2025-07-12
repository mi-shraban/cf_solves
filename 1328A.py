# Problem link: https://codeforces.com/problemset/problem/1328/A
# Solve Link: https://codeforces.com/contest/1328/submission/175368709

for i in range(int(input())):
    a, b = [int(i) for i in input().split()]
    if a % b == 0:
        print(0)
    else:
        print(b-a%b)