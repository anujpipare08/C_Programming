#include<stdio.h>
int main()
{
    int number1 = 0;
    int number2 = 0;
    int addition = 0;
         
    printf("Enter first number : \n");
    scanf("%d",&number1);

    printf("Enter second number : \n");
    scanf("%d",&number2);

    addition = number1 + number2;

    printf("Addition is : %d ",addition);
    return 0 ;
}