#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;
// O(N)
int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;  // unable to handle negative input

    for(iMax = Arr[iCnt]; iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
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
    iRet = Maximum(iPtr, iLength);

    printf("maximum number is : %d\n",iRet);
 
 
    free(iPtr);
    return 0;
}
