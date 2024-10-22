#include <stdio.h>

int main()
{ 
    float A, B, c, d;
    A = 400000;
    B = 350000;
    c = 0.13;
    d = 0.21;
    printf("Harga sepatu A adalah %.0f\n", A);
    printf("Harga sepatu B adalah %.0f\n", B);
    float diskonA = A - ( A * c );
    float diskonB = B - ( B * d );
    printf("Sepatu A mendapat diskon 13%% sehingga hasilnya menjadi %.0f\n", diskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga hasilnya menjadi %.0f", diskonB);
    return 0;
}