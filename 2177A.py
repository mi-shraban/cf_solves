import sys


def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n, s, l = [int(x) for x in input().split()]
    m, k, p = [int(x) for x in input().split()]
    
    spp = s // p
    r = n * spp * k

    for i in range(5):
        q = int(input())
        flows = []
        for j in range(q):
            ga, lfa, gb, lfb = [int(x) for x in input().split()]
            flows.append((ga, gb))

        oxc_states = [[-1] * r for _ in range(m)]
        used = [set() for _ in range(m)]
        routes = []
        
        for idx, (ga, gb) in enumerate(flows):
            assigned = False
            for sa in range(s):
                for sb in range(s):
                    if sa % p != sb % p:
                        continue
                    plane = sa % p
                    for oxc in range(plane, m, p):
                        for k_try in range(k):
                            portA = ga * (spp * k) + (sa % spp) * k + k_try
                            portB = gb * (spp * k) + (sb % spp) * k + k_try
                        
                            if portA == portB:
                                continue
                            if portA in used[oxc] or portB in used[oxc]:
                                continue
                            
                            oxc_states[oxc][portA] = portB
                            oxc_states[oxc][portB] = portA

                            used[oxc].add(portA)
                            used[oxc].add(portB)
                            
                            routes.append((sa, k_try, oxc, sb, k_try))
                            assigned = True
                            break
                        if assigned:
                            break
                    if assigned:
                        break
                if assigned:
                    break
            if not assigned:
                sa = sb = 0
                oxc = 0
                k_try = 0

                portA = ga * (spp * k) + (sa % spp) * k + k_try
                portB = gb * (spp * k) + (sb % spp) * k + k_try

                if oxc_states[oxc][portA] == -1 and oxc_states[oxc][portB] == -1:
                    oxc_states[oxc][portA] = portB
                    oxc_states[oxc][portB] = portA
                routes.append((sa, k_try, oxc, sb, k_try))

        
        for state in oxc_states:
            print_fast(f"{' '.join(map(str, state))}")
        
        for route in routes:
            print_fast(f"{' '.join(map(str, route))}")


solve()