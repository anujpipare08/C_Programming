#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;
// O(N)
void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("enter the number of elemnts :\n");
    scanf("%d",&iLength);
    // step1 : allocate the memory

    iPtr = (IPTR)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("unable to allocate the memory\n");
        return-1;
    }
    printf("enter the value : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    // step2 : use the memory
     ReverseDisplay(iPtr, iLength);

    free(iPtr);
    return 0;
}

