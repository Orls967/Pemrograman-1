#include<stdio.h>
int main()
{
    int a;
    char tanda;
    scanf("%d %c", &a, &tanda);
    for(int i = 1; i <= 50; i++){
        if(i % a == 0){
            printf("%c ", tanda);
        } else {
            printf("%d ", i);
        }
    } return 0;
}