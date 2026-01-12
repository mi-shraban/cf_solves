import sys

def input():
    return sys.stdin.readline().strip()


def print_fast(x):
    sys.stdout.write(f"{x}\n")


def solve():
    n = int(input())
    p = list(map(int, input().split()))
    
    diff = [abs(p[i + 1] - p[i]) for i in range(n - 1)]

    l = [-1] * (n - 1)
    st = []
    st_append = st.append
    st_pop = st.pop

    for i in range(n-1):
        while st and diff[st[-1]] >= diff[i]:
            st_pop()
        if st:
            l[i] = st[-1]
        st_append(i)
    
    st.clear()
    r = [n-1] * (n - 1)

    for i in range(n-2, -1, -1):
        while st and diff[st[-1]] > diff[i]:
            st_pop()
        if st:
            r[i] = st[-1]
        st_append(i)
    
    cnt = [0] * (n + 1)
    for i in range(n - 1):
        m = diff[i]
        cnt[m] += (i - l[i]) * (r[i] - i)

    ans = [0] * (n + 1)
    suff = 0
    for k in range(n - 1, 0, -1):
        suff += cnt[k]
        ans[k] = suff

    return ' '.join(map(str, ans[1:n]))


for _ in range(int(input())):
    print_fast(solve())