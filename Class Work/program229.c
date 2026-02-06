#include<stdio.h>
int CountCaptal(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z') )  // a= 97,z = 122
        {
          iCount++;
        }
        str++;
    }
     return iCount;
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCaptal(Arr);
    printf("number of capital charcter are  : %d\n",iRet);

    return 0;
}
