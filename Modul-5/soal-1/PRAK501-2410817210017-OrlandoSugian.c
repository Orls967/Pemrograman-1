#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int bilmaks = a;
    if (b > bilmaks) bilmaks = b;
    if (c > bilmaks) bilmaks = c;
    if (d > bilmaks) bilmaks = d;
    return bilmaks;
}   int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}
