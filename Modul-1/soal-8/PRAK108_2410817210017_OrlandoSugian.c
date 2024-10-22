#include <stdio.h>
int main ()
{
    int putaran = 5, jarak = 14;
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak);
    float keliling = (float)jarak / putaran;
    float radius = keliling / ( 2 * 3.14);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %0.2f Kilometer", radius);
    return 0;

}