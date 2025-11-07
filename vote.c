//Verify voting for Krishna Hitnalikar

#include<stdio.h>

int criteria( int)

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d", &iAge);

    if (iAge >= 18)
    {
        printf("You can vote !!");
    }
    else
    {
        printf("You can not vote !!");
    }
    
    return 0;
}