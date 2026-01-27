#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};
    printf("%s\n",Arr); //HEllo
    printf("%ld\n",sizeof(Arr)); //6
    printf("%d\n",strlen(Arr));   //5
    return 0;
}