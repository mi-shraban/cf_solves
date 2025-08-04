import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, m = [int(x) for x in input().split()]
    c = [0] + [int(x) for x in input().split()]

    graph = {i: [] for i in range(1, n + 1, 1)}
    for i in range(1, n+1, 1):
        for j in range(i+1, n+1, 1):
            graph[i].append((j, c[j]))
            graph[j].append((i, c[i]))

    for i in range(m):
        u, v = [int(x) for x in input().split()]


    for k in graph:
        print(f"{k}: {graph[k]}")


# for _ in range(int(input())):
print_fast(solve())

# unsolved