import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    s = input()
    cnt = 0
    cf = "codeforces"
    for i in range(10):
        if s[i] != cf[i]:
            cnt += 1
    return cnt

    
for _ in range(int(input())):
    print_fast(solve())