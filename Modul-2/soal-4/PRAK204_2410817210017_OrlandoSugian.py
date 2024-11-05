
phi = 22/7
print("Input jari-jari dan tinggi : ")
my_input = []
while(len(my_input) < 2):
    x = input()
    x = x.split()
    my_input += x
r = float(my_input[0])
tinggi = float(my_input[1])
volume = float(phi * r ** 2 * tinggi)
lpermukaan = float((2 * phi * r * tinggi) + (2 * phi * r**2))
kll = float(2 * phi * r)
print(f"Volume = {volume:.2f}")
print(f"Luas = {lpermukaan:.2f}")
print(f"Keliling = {kll:.2f}")