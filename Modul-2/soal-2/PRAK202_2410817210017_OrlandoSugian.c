#include<stdio.h>
int main()
{
    float a,b;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);
    if(a < 1)
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", a, b, a+b);
    else 
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", a, b, a+b);
    return 0;
}