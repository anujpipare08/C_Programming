
#include<stdio.h>

void Display(int ino)
{
    int icnt = 0;

    for(icnt = ino; icnt >= 0; icnt--)
    {
        printf("%d\t",icnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("please enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}