//////////////////////////////////
//
//Required Header files
//
//////////////////////////////////

#include<stdio.h>       //for input outpit
#include<stdbool.h>     //for bool datatype

//////////////////////////////////
//
// Function name :  CheckEvenOdd
// Decription :     it is used to check even or odd
// Input :          integer
// Output :         boolean
// Author :         Anuj Omprakash Pipare
// Date :           10/10/2025
//////////////////////////////////


bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {    return true; }
    else
    {   return false; }

//////////////////////////////////
//
// Entry point function for the appication
//
//////////////////////////////////
//    
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is Even number\n",iValue);  }
    else
    { printf("%d is Odd number\n",iValue); }
    return 0;
}