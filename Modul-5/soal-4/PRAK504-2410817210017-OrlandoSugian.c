#include <stdio.h>
int reverse(int bil) {
    int ripers = 0;
    while (bil > 0) {
        ripers = ripers * 10 + bil % 10; 
        bil /= 10; 
    }
    return ripers;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d\n", reverse(C));
    return 0;
}
