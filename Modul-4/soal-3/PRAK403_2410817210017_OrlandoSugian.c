#include<stdio.h>
int main()
{
    int digit1, digit2;
    scanf("%d %d", &digit1, &digit2);
    if (digit1 < digit2){
        for (int i = digit1; i <= digit2; i++){
            printf("%d %d", i, digit1 + digit2 - i);
            if (i != digit2) 
            printf(" - ");
        }
    } else {
        for ( int i = digit1; i >= digit2; i--) {
            printf("%d %d", i, digit1 + digit2 -i);
        if (i != digit2) 
            printf(" - ");
        }
    } return 0;
}