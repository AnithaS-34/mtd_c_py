#include<stdio.h>
#include<math.h>
int main()
{
    int inputNumber = 0 ;
    int sum = 0;
    int remainderDigit = 0;
   
    puts("Enter a number:");
    scanf("%d",&inputNumber);
    while(inputNumber>0)
    {
        remainderDigit = inputNumber % 10;
        sum =sum + remainderDigit;
        inputNumber = inputNumber / 10;

        

        if( sum < 9)
        {
          printf("%d",sum);
        }
    

    }
    return 0;
    

}
