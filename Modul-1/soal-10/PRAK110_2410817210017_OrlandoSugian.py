import math
a = 12
c = 5
bkuadrat = a**2 + c**2
b = math.sqrt(bkuadrat)
kll = a + b + c
luas = a * c * 1 / 2
print("Diketahui : ")
print(f"Alas = {c} cm")
print(f"Tinggi = {a} cm")
print()
print()
print("Jawab :")
print(f"Sisi A = {a} cm")
print(f"Sisi B = {b:.0f} cm")
print(f"Sisi C = {c} cm")
print(f"Keliling = {kll:.0f} cm")
print(f"Luas = {luas:.0f} cm")