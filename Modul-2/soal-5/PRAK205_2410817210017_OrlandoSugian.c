#include<stdio.h>
#include<math.h>
int main()
{
float tinggia, smiringb, kll, luas;
double alasc;
printf("Input nilai A dan B : \n");
scanf("%f %f", &tinggia, &smiringb);
alasc = sqrt ((smiringb * smiringb) - (tinggia * tinggia));
kll = tinggia + smiringb + alasc;
luas = 0.5 * tinggia * alasc;
printf("Alas = %.0f cm\n", alasc);
printf("Tinggi = %.0f cm\n", tinggia);
printf("Keliling = %.0f cm\n", kll);
printf("Luas = %.0f cm^2", luas);
return 0;
}