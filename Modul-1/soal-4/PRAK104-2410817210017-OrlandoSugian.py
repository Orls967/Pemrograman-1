A = 400000
B = 350000
c = 0.13
d = 0.21
print(f"Harga sepatu A adalah {A}")
print(f"Harga sepatu B adalah {B}")

harga_setelah_diskon_A = A - (A * c)
harga_setelah_diskon_B = B - (B * d)

print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {harga_setelah_diskon_A :.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {harga_setelah_diskon_B :.0f}")
