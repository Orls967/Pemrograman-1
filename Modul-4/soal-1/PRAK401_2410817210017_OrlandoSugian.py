data = input("")
a, tanda = data.split()
a = int(a)
for i in range (1,51): 
    if i % a == 0:
        print(f"{tanda} ", end="")
    else: 
        print(f"{i} ", end="")
