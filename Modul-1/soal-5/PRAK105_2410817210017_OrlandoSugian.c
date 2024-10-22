#include <stdio.h>
int main ()
{
    int a = 9, b = 5, x = 8, y = 8;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    int ab = a % b;
    int xy = x % y;
    int total = ab + xy;
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", total);
    return 0;
}