inputan = []
while(len(inputan) < 3):
    x = input()
    x = x.split()
    inputan += x
    inputan = list(map(int,inputan))
inp1 = inputan[0]
inp2 = inputan[1]
inp3 = inputan[2]
if inp1 > inp3 and inp1 > inp2 and inp2 > inp3:
    print(f"{inp3} {inp2} {inp1}")
elif inp1 > inp2 and inp1 > inp3 and inp3 > inp2:
    print(f"{inp2} {inp3} {inp1}")
elif inp2 > inp3 and inp2 > inp1 and inp1 > inp3: 
    print(f"{inp3} {inp1} {inp2}")
elif inp2 > inp1 and inp2 > inp3 and inp3 > inp1:
    print(f"{inp1} {inp3} {inp2}")
elif inp3 > inp2 and inp3 > inp1 and inp1 > inp2:
    print(f"{inp2} {inp1} {inp3}")
else : 
    print(f"{inp1} {inp2} {inp3}")
    