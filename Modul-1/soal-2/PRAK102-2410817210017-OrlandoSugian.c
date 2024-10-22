#include <stdio.h>

int main ()
{
    float a, b, c;
    a = 4;
    b = 8;
    c = 3;
    printf("Variabel a bernilai %0.f\n", a);
    printf("Variabel b bernilai %0.f\n", b);
    printf("Variabel c bernilai %0.f\n", c);
    float hasil = (a * b) / c;
    printf("Hasil dari a dikali b dibagi c adalah %f\n", hasil);
    return 0;
}