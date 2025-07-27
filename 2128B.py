import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def is_bad(arr):
    cnt, start = 1, 0
    for i in range(len(arr)-1):
        if arr[i] < arr[i+1]:
            cnt += 1
        else:
            cnt = 1
            start = i
    print(cnt)
    if cnt > 4:
        return True, start, start+cnt
    return False, start, start+cnt


def solve():
    n = int(input())
    p = [int(x) for x in input().split()]

    ans = ["L"]*n
    ver = False
    ver1, start1, end1 = is_bad(p)
    ver2, start2, end2 = is_bad(p[::-1])

    if ver1:
        for i in range(start1, end1):
            if i & 1:
                ans[i] = "R"
    elif ver2:
        for i in range(start2, end2):
            if i & 1:
                ans[i] = "R"

    return "".join(ans)


for _ in range(int(input())):
    print_fast(solve())


# Unsolved