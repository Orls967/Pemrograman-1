#include <stdio.h>
#include <string.h>
int main() {
    char kode[100], pesan[100];
    int bintang = 0, pagar = 0;
    fgets(kode, sizeof(kode), stdin);
    kode[strcspn(kode, "\n")] = '\0';
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = '\0'; 
    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    printf("Hasil: ");
    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == pesan[i]) {
            printf("*");
            bintang++;
        } else {
            printf("#");
            pagar++;
        }
    }
    printf("\n");
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}