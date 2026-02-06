#include<stdio.h>
int CountSmall(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z') )  // a= 97,z = 122
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

    iRet = CountSmall(Arr);
    printf("number of small charcter are  : %d\n",iRet);

    return 0;
}
