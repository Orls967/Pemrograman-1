a = int(input(""))
hari = (a // 86400)
jam = (a % 86400) // 3600
menit = (a // 60) % 60
detik = (a % 60)
if hari > 0 :
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else :
    print(f"{jam:02}:{menit:02}:{detik:02}")