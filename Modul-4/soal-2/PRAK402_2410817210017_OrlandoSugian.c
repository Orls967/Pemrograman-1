#include<stdio.h>
int main()
{
int maks;
scanf("%d", &maks);
for (int i = 1; i <= maks; i += 2){
    printf("%d ", i);
}
printf("\n");
if (maks % 2 != 0){
    maks -= 1;
} 
for (int i = maks; i >=2; i -= 2){
    printf("%d ", i);
}return 0;
}