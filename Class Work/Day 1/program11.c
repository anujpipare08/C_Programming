/*
    Algorithm
    START
        Accept first number as no1
        Accepet second number as no2
        If the input is negative then convert it into positive
        Perform of addition of no1 and n02
        Display the addition on screeen
    STOP
*/

/////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name :   AdditionTwoNumbers                          
//  Description :     It is used to perform Addition                           
//  Input :           Float, Float
//  Output :          Float
//  Author :          Anuj Omprakash Pipare
//  Date:             09/10/2025
/////////////////////////////////////////////

float AdditionTwoNumbers(
                           float fNo1,                         // First input
                           float fNo2                          // Second input
                        )
{
    float fsum = 0;                                            // to store the result                    

    if(fNo1 < 0.0f)                                            // updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                            // updator 
    {
        fNo2 = -fNo2;                                          
    }

    fsum = fNo1 + fNo2;  //buisness logic
    return fsum;
}  // End of AdditionTwoNumbers

/////////////////////////////////////////////
// 
//  Entry point function for the application
//
/////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f,  fValue2 = 0.0, fRet = 0.0f;         //  

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f",fRet);

    return 0;
}

/////////////////////////////////////////////
//
// Testcases succesfully handled by the application
// Input1 : 10.5    Input2 : 3.2    Output : 13.7
// Input1 : -10.5   Input2 : 3.2    Output : 13.7
// Input1 : 10.5    Input2 : -3.2   Output : 13.7
// Input1 : -10.5   Input2 : -3.2   Output : 13.7
// Input1 : 10.5    Input2 : 0      Output : 10.5
/////////////////////////////////////////////