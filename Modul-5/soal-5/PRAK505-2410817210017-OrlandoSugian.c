#include <stdio.h>
void Biodata(int tahunLahir, char Namaku[], char Asal[]) {
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", tahun_sekarang - tahunLahir);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", Asal);
}
int main() {
    int tahunLahir;
    char A[20], B[15];       
    char Namaku[20], Asal[15];
    scanf(" %d", &tahunLahir);    
    scanf(" %[^\n]%*c", A);
    scanf(" %[^\n]%*c", B);      
    snprintf(Namaku, sizeof(Namaku), "%s", A); 
    snprintf(Asal, sizeof(Asal), "%s", B); 
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}
