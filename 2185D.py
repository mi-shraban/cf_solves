import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, m, h = map(int, input().split())
    a = list(map(int, input().split()))
    
    ops = []
    for i in range(m):
        b, c = map(int, input().split())
        ops.append((b, c))
    
    added = [0] * n
    last_update = [-1] * n
    reset_time = -1

    for i, (b, c) in enumerate(ops):
        if last_update[b-1] < reset_time:
            added[b-1] = 0
        if a[b-1] + added[b-1] + c > h:
            reset_time = i
        else:
            added[b-1] += c
            last_update[b-1] = i
    
    ans = []
    for i in range(n):
        if last_update[i] < reset_time:
            added[i] = 0
        ans.append(a[i] + added[i])

    return f"{' '.join(map(str, ans))}"


for _ in range(int(input())):
    print_fast(solve())