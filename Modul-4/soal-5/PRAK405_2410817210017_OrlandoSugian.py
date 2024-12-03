inputan = input("")
baris, kelipatan = map(int,inputan.split())
total = 0
for i in range(1, baris + 1):
    baris_hasil = ""  
    baris_total = 0  
    for j in range(i, 0, -1):
        if j != i:  
            baris_hasil += " + "
        baris_hasil += f"({j} * {kelipatan})"
        baris_total += j * kelipatan  
        total += j * kelipatan  
    print(baris_hasil, f"= {baris_total}")  
print(total)