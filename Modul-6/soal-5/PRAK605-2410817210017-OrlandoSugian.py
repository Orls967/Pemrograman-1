def hitung(A, B, n):
    C = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j]
    return C
n = int(input())
A = []
print("Matriks A")
for i in range(n):
    row = list(map(int, input().split()))
    A.append(row)
B = []
print("Matriks B")
for i in range(n):
    row = list(map(int, input().split()))
    B.append(row)
C = hitung(A, B, n)
for row in C:
    print(" ".join(map(str, row)))
