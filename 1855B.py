# import sys
#
#
# def input():
#     return sys.stdin.readline().strip()
#
#
# def print_fast(x):
#     sys.stdout.write(f"{x}\n")
#
#
# def solve():
#     n = int(input())
#     mx = 1
#     r = 0
#     for i in range(1, int(n**0.5)+1):
#         if n % i == 0:
#             r += 1
#         else:
#             mx = max(mx, r)
#             r = 0
#     return mx
#
#
# for _ in range(int(input())):
#     print_fast(solve())

# for i in range(25):
#     print(i+1, 169958913706572972 % (i+1))

# O(sqrt(n)) but n can be 10**18 ;-; pajn

import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())


for _ in range(int(input())):
    print_fast(solve())

