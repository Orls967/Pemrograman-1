a = int(input(""))
if a == 0 :
    print("Nol")
elif 0 < a < 10 :
    print("Satuan")
elif 10 < a < 20 :
    print("Belasan")
elif a == 10 :
    print("Puluhan")
elif 19 < a < 100 :
    print("Puluhan")
else :
    print("Anda Menginput Melebihi Limit Bilangan")