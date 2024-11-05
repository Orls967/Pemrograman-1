print("Input nilai : ")
inputan = []
while(len(inputan) < 6) :
    x = input()
    x = x.split()
    inputan += x
a = float(inputan[0])
b = float(inputan[1])
i = float(inputan[2])
j = float(inputan[3])
x = float(inputan[4])
y = float(inputan[5])
hasil = (a - b) * i / j - (x + y)
print("Output : ")
print(f"{hasil:.3f} ")