#include <stdio.h>
int main() {
    int brs, klm;
    scanf("%d %d", &brs, &klm);
    int matriks[brs][klm];
    for (int i = 0; i < brs; i++) {
        for (int j = 0; j < klm; j++) {
        scanf("%d", &matriks[i][j]);
        }
    }
    printf("");
    for (int i = 0; i < brs; i++) {
        for (int j = 0; j < klm; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
