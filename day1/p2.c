#include<stdio.h>
int main()
{
    int num1 = 50000;
    long int num2 = 6000000;
    long long int num3 = 10000000000000;
    double d = 0.0;
    float f = 0.0f;
    printf("%d %d %d %d %d \n", sizeof(num1),sizeof(num2),sizeof(num3),sizeof(d),sizeof(f));
    return 0;
}