#include <stdio.h>
int main () 
{
   char nama[50], nim[50], paralel[5], ttl[50], alamat[50], hobi[50], nohp[50];
    printf("Masukkan Biodata : \n");
    printf("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                  : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel        : ");
    fgets(paralel, sizeof(paralel), stdin);
    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat               : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                : ");
    fgets(hobi, sizeof(hobi), stdin);
    printf("No. HP               : ");
    fgets(nohp, sizeof(nohp), stdin);
    printf("Biodata : \n");
    printf("Nama                 : %s", nama);
    printf("NIM                  : %s", nim);
    printf("Kelas Paralel        : %s", paralel);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat               : %s", alamat);
    printf("Hobby                : %s", hobi);
    printf("No. HP               : %s", nohp);
    return 0;
}