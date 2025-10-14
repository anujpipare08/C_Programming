/*
    step1 : understnad the problem statement
    step2 : write the algorithm
    step3 : decide the progamming language
    step4 : write the program
    step5 : testvthe program
*/
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
#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fsum = 0;

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fsum = fNo1 + fNo2;  //buisness logic
    return fsum;
}
int main()
{
    float fValue1 = 0.0f,  fValue2 = 0.0, fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f",fRet);

    return 0;

}