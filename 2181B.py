import sys
import heapq

def input():
    return sys.stdin.readline().strip()

def print_fast(x):
    sys.stdout.write(f"{x}\n")

def solve():
    n, m = map(int, input().split())
    a = [-int(x) for x in input().split()]
    b = [-int(x) for x in input().split()]
    
    heapq.heapify(a)
    heapq.heapify(b)
    
    alice_turn = True
    last_move = None

    while a and b:
        if alice_turn:
            last_move = "Alice"
            x = -heapq.heappop(a)
            y = -heapq.heappop(b)
            if x < y:
                heapq.heappush(b, -(y - x))
                heapq.heappush(a, -x)
            else:
                if not b:
                    return "Alice"
                heapq.heappush(a, -x)
        else:
            last_move = "Bob"
            x = -heapq.heappop(b)
            y = -heapq.heappop(a)
            if x < y:
                heapq.heappush(a, -(y - x))
                heapq.heappush(b, -x)
            else:
                if not a:
                    return "Bob"
                heapq.heappush(b, -x)
        alice_turn = not alice_turn
    return last_move


for _ in range(int(input())):
    print_fast(solve())
