#include <stdio.h>
int main ()
{
    int a = 4, b = 5, c = 7;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d dan %d\n", a, b, c);
    int kll = a + b + c;
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kll);
    int hargatanah = 85000;
    printf("Harga tanah Per Meter adalah %d\n", hargatanah);
    printf("Jawaban :\n");
    int total = kll * hargatanah;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", total);
    return 0;
}