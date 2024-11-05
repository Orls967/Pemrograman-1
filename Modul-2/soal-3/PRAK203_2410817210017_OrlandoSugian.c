#include<stdio.h>
int main()
{
    float a, b, i, j, x, y;
    printf("Input nilai : ");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    printf("Output : %.3f\n", ( a - b ) * i / j - ( x + y ));
    return 0;
}