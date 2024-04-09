def construct_matrix(n, c, d, a):
    a11 = min(a)
    m = [[0] * n for _ in range(n)]
    m[0][0] = a11
    for j in range(1, n):
        m[0][j] = m[0][j - 1] + c
    for i in range(1, n):
        m[i][0] = m[i - 1][0] + d
        for j in range(1, n):
            m[i][j] = m[i][j - 1] + c
    return m

def check_progressive_square(n, a):
    b = sorted(a)
    c = sorted([m[i][j] for i in range(n) for j in range(n)])
    if b == c:
        return "YES"
    else:
        return "NO"

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, c, d = map(int, input().split())
        a = list(map(int, input().split()))
        m = construct_matrix(n, c, d, a)
        print(check_progressive_square(n, a))
