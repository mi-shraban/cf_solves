import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    idx = 0
    while idx < n and a[idx] == n - idx:
        idx += 1
    
    target = n - idx
    pos = -1
    for i in range(n):
        if a[i] == target:
            pos = i
            break
    
    res = a[:idx]

    if pos != -1:
        res.extend((a[idx:pos + 1][::-1]))
        res.extend(a[pos + 1:])
    
    return f"{' '.join(map(str, res))}"


for _ in range(int(input())):
    print_fast(solve())