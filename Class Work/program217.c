#include<stdio.h>
int strlenX(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
         str++;
    iCount++;
   
    }
     return iCount;
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("string lenght is : %d\n",iRet);

    return 0;
}
