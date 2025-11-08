import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def isPalindrome(s):
    return s == s[::-1]


def solve():
    n = int(input())
    s = input()
    cnt = 0
    ans = []
    if isPalindrome(s):
        return "0\n"

    for i, x in enumerate(s):
        if x == '1':
            cnt += 1
            ans.append(i)
    return f"{cnt}\n{' '.join(str(x+1) for x in ans)}"
    # had to use 1 based indexing.... ;-;

for _ in range(int(input())):
    print_fast(solve())