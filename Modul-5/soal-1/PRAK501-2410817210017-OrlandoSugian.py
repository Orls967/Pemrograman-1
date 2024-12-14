def MaxBilangan(a, b, c, d):
    bilmaks = a  
    if b > bilmaks:
        bilmaks = b 
    if c > bilmaks:
        bilmaks = c  
    if d > bilmaks:
        bilmaks = d  
    return bilmaks  
a, b, c, d = map(int, input().split())
hasil = MaxBilangan(a, b, c, d)
print(hasil)
