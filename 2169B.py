import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    s = input()
    for i in range(len(s)-1):
        if s[i] != '<' and s[i+1] != '>':
            return -1
    return len(s) - min(s.count('<'), s.count('>'))


for _ in range(int(input())):
    print_fast(solve())