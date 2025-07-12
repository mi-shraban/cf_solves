# Problem link: https://codeforces.com/problemset/problem/1729/B
# Solve Link: https://codeforces.com/contest/1729/submission/172228716

for _ in range(int(input())):
    n = int(input())
    x = int(input())
    ans = ""
    while x > 0:
        if x % 10 == 0:
            x //= 10
            ans += chr(96+x%100)
            x //= 100
        else:
            ans += chr(96+x%10)
            x //= 10
    print(ans[::-1])