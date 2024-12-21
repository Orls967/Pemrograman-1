brs, klm = map(int, input("").split())
inputan = list(map(int, input("").split()))
matriks = [inputan[i * klm:(i + 1) * klm] for i in range(brs)]
for row in matriks:
    print(" ".join(map(str, row)))
