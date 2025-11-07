#include<stdio.h>
int addition(int value1, int value2)
{
    int sum = 0;
    sum = value1 + value2;
    return sum;
}
int main()
{
    int number1 =10, number2 = 20, answer = 0;
    answer = addition( number1, number2);
    printf("answer is :%d",answer);
    return 0;
}       