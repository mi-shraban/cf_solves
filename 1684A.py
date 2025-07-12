# Problem link: https://codeforces.com/problemset/problem/1684/A
# Solve Link: https://codeforces.com/contest/1684/submission/158267220

t = int(input())
for i_t in range(t):
    n = input()
    n_li = []
    for x in n:
        n_li.append(int(x))
    # print(n_li)

    if len(n_li) == 2:
        print(n_li[1])
    else:
        print(min(n_li))