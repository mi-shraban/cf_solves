# Problem link: https://codeforces.com/problemset/problem/1783/A
# Solve Link: https://codeforces.com/contest/1783/submission/189474835

def printArr(arr:list) ->str:
    x = ""
    for elem in arr:
        x += f"{elem} "
    return x


def solve():
    n = int(input())
    a = [int(i) for i in input().split()]
    if a[0] == a[n-1]:
        print("NO")
    else:
        print("YES")
        b = [a[n-1]]
        b += a[0:n-1]
        print(printArr(b))


for i in range(int(input())):
    solve()