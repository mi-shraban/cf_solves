import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def binarySearch(arr, c):
    l, r = 0, len(arr)-1
    result = -1

    while l <= r:
        mid = (l+r)//2

        if arr[mid] == c:
            return arr[mid]
        elif arr[mid] < c:
            result = arr[mid]
            l = mid + 1
        else:
            r = mid - 1
    return result


def solve():
    n, c = [int(x) for x in input().split()]
    arr = [int(x) for x in input().split()]
    arr.sort()

    coins = 0

    while True:
        x = binarySearch(arr, c)
        # print(x, arr)
        if x == -1:
            break
        else:
            arr.remove(x)
            for i in range(len(arr)):
                arr[i] *= 2
    return len(arr)


for _ in range(int(input())):
    print_fast(solve())