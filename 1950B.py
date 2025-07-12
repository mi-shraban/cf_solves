# Problem link: https://codeforces.com/problemset/problem/1950/B
# Solve Link: https://codeforces.com/contest/1950/submission/253921611

import sys


def input():
    return sys.stdin.readline().strip()


def print(x):
    return sys.stdout.write(x)


def buildGrid():
    grid = [['.']*40 for _ in range(40)]

    for i in range(0, 40, 4):
        for j in range(0, 40, 4):
            try:
                grid[i][j] = '#'
                grid[i+1][j+1] = '#'
                grid[i+1][j] = '#'
                grid[i][j+1] = '#'
            except IndexError:
                continue

    for i in range(2, 40, 4):
        for j in range(2, 40, 4):
            try:
                grid[i][j] = '#'
                grid[i+1][j+1] = '#'
                grid[i+1][j] = '#'
                grid[i][j+1] = '#'
            except IndexError:
                continue

    return grid


def solve():
    grid = buildGrid()
    n = int(input())

    for i in range(n*2):
        for j in range(n*2):
            print(grid[i][j])
        print("\n")


for t in range(int(input())):
    solve()