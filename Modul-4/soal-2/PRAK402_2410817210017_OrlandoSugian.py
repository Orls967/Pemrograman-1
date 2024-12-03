maks = int(input(""))
for i in range(1, maks + 1, 2):
    print(f"{i} ", end="")
print()
if maks % 2 != 0 :
    maks -= 1
for i in range(maks, 1, -2):
    print(f"{i} ", end="")