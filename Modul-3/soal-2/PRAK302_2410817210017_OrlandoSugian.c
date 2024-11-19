#include <stdio.h>
int main ()
{
    int nilai;
    scanf("%d", &nilai);
    switch(nilai/10){
        case 10 :
        case 9 :
        case 8 :
            printf("A");
            break;
        case 7 :
            printf("B");
            break;
        case 6 : 
            printf("C");
            break;
        case 5 :
            printf("D");
            break;
        default : 
            printf("E");

    }
    return 0;
}