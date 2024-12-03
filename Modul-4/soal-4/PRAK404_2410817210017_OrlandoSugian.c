#include<stdio.h>
int main()
{
    int program;
    float angka1, angka2, hitung;
    while(1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &program);
        if (program == 5) {
            printf("Terimakasih, telah menggunakan kalkulator ORLANDOSUGIAN");
            break;
        }
        if (program < 1 || program > 4) {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;
        }
        printf("Masukkan nilai pertama: ");
        scanf("%f", &angka1);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &angka2);
        switch (program) {
            case 1:
                hitung = angka1 + angka2;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hitung);
                break;
            case 2:
                hitung = angka1 - angka2;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hitung);
                break;
            case 3:
                hitung = angka1 * angka2;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hitung);
                break;
            case 4:
                hitung = angka1 / angka2;
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hitung);
    }
} return 0;
}