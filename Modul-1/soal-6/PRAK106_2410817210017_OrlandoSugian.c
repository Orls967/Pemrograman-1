#include <stdio.h>
int main ()
{
    int a = 4, b = 8, c = 3;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", (a == b) ? 1 : 0);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", (b > c)? 1 : 0);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", (a != c )? 1 : 0);
    return 0;

}