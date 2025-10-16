
#include<stdio.h>

void Display()  // for loop
{
    int icnt = 0;

    for(icnt = 1; icnt <= 5; icnt++)
    {
        printf("%d\t*\t",icnt);
    }
    printf("\n");
}

int main()
{
    Display();
    return 0;
}