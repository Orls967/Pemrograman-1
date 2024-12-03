datainput = (input(""))
digit1, digit2 = map(int,datainput.split())
if digit1 < digit2 : 
    for i in range (digit1, digit2 + 1) :
        print(f"{i} {digit1 + digit2 -i}", end=" - " if i < digit2 else "")
else : 
    for i in range (digit1, digit2 - 1, -1):
        print(f"{i} {digit1 + digit2 -i}", end=" - " if i > digit2 else "")