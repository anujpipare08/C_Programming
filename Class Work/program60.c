#include<stdio.h>

int main()
{
    int iNo = 7236;
    int iDigit = 0;

    iDigit = iNo % 10;  //6
    printf("%d\n", iDigit);
    iNo = iNo / 10;    //723

    iDigit = iNo % 10;      //3
    printf("%d\n", iDigit);
    iNo = iNo / 10;     //72

    iDigit = iNo % 10;      //2
    printf("%d\n", iDigit);
    iNo = iNo / 10;     //7

    iDigit = iNo % 10;      //7
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    return 0;
}