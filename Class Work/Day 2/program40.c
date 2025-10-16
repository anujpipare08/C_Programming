// input 10
// 2    4   6   8   10
#include<stdio.h>

void Display(int ino)
{
    int icnt = 0;

    for(icnt = 2; icnt <= ino; icnt=icnt+2)
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