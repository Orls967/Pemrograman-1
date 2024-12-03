#include<stdio.h>
int main()
{
    int baris, kelipatan, total = 0;
    scanf("%d %d", &baris, &kelipatan);
    for (int i = 1; i <= baris; i++) {
        int total_kelipatan = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, kelipatan);
            total_kelipatan += j * kelipatan;
            total += j * kelipatan;
            if (j > 1) printf(" + ");
        }
        printf(" = %d\n", total_kelipatan);
    }
        printf("%d\n", total);
    return 0;
}