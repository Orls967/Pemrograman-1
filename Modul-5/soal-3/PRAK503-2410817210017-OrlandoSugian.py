def maksimal(a, b):
    return a if a > b else b
def minimal(a, b):
    return a if a < b else b
n = int(input())
nilai =list(map(int,input().split()))
maks = nilai[0]
minim = nilai[0]
for num in nilai[1:]:
        maks = maksimal(maks, num) 
        minim = minimal(minim, num)
print(maks, minim)
