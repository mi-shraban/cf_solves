# Problem link: https://codeforces.com/problemset/problem/185/A
# Solve Link: https://codeforces.com/contest/185/submission/209527870

mod_value = 10**9+7

class Matrix:
    def __init__(self, row, col):
        self.row = row
        self.col = col
        self.m = [[0 for i in range(self.col)] for j in range(self.row)]

    def printMatrix(self):
        for i in range(self.row):
            for j in range(self.col):
                print(self.m[i][j], end=" ")
            print()

    def __mul__(self, other):
        product = Matrix(self.row, other.col)
        for i in range(self.row):
            for j in range(other.col):
                for k in range(other.row):
                    product.m[i][j] += self.m[i][k] * other.m[k][j]
                    product.m[i][j] %= mod_value
        return product

    def pow(self, n):
        ans = Matrix(self.row, self.col)

        for i in range(self.row):
            ans.m[i][i] = 1

        a = self * ans

        while n > 0:
            if n & 1:
                ans = ans * a
            a = a * a
            n >>= 1

        return ans


def solve():
    n = int(input())

    Q = Matrix(2, 2)
    F = Matrix(2, 1)

    Q.m[0][0], Q.m[0][1] = 3, 1
    Q.m[1][0], Q.m[1][1] = 1, 3

    F.m[0][0] = 1
    F.m[1][0] = 0

    Qn = Q.pow(n)
    Ans = Qn*F

    print(Ans.m[0][0])


solve()