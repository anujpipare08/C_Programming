/*
    START
        Accept number and store as no
        DIivide no by 2
        If the remainder is 0
         then display as even 
        otherwise
         dispaly as odd 
    STOP 
*/       
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number\n");
    }

}
int main()
{
    int iValue1 = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue1);

    CheckEvenOdd(iValue1);
    return 0;
}