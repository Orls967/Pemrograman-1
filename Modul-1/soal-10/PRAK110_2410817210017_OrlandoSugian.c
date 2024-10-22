#include <stdio.h>
#include <math.h>
int main ()
{
    int a = 12, c = 5;
    printf("Diketahui : \n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n\n", a);
    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", a);
    float bkuadrat = pow (a,2) + pow (c,2);
    float b = sqrt(bkuadrat);
    printf("Sisi B = %.0f cm\n", b);
    printf("Sisi C = %d cm\n", c);
    float kll = a + b + c;
    printf("Keliling = %.0f cm\n", kll);
    float luas = a * c * 1 / 2;
    printf("Luas = %.0f cm\n", luas);
    return 0;


}