
print("Input nilai A dan B :")
inputnilai = []
while(len(inputnilai) < 2):
    x = input()
    x = x.split()
    inputnilai += x
tinggia = float(inputnilai[0])
smiringb = float(inputnilai[1])
alasc = (smiringb ** 2 - tinggia ** 2) ** 0.5
kll = tinggia + smiringb + alasc
luas = 1/2 * tinggia * alasc
print(f"Alas = {alasc:.0f} cm")
print(f"Tinggi = {tinggia:.0f} cm")
print(f"Keliling = {kll:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
