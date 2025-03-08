#include<stdio.h>
int main()
{
    int num = 0;
    puts("Enter a number to prints is Math table:");
    scanf("%d",&num);
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d * %02d  = %03d\n",num,i,num*i);
    }
    return 0;
}
