#include<stdio.h>
int main()
{
float phi = 22.0/7.0;
float r, tinggi, volume, lpermukaan, kll;
printf("Input jari-jari dan tinggi : \n");
scanf("%f %f", &r, &tinggi);
volume = phi * r * r * tinggi;
lpermukaan = (2 * phi * r * tinggi) + (2 * phi * r * r);
kll = 2 * phi * r;
printf("Volume = %.2f\n", volume);
printf("Luas = %.2f\n", lpermukaan);
printf("Keliling = %.2f", kll);
return 0;
}