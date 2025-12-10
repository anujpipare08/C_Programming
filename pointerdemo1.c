#include<stdio.h>
int main()
{
    int iValue = 11;
    char cVale = 'M';

    int *iPtr = &iValue;
    char *cptr = &cVale;

    printf("sizeof iPtr : %lu\n",sizeof(iPtr));//8
    printf("sizeof cPtr : %lu\n",sizeof(cptr));//8

   return 0;
}   