#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;
// O(N)
bool Linearsearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)a
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    } 
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
       return true;
    }
 
}
int main()
{
    int iLength = 0, iCnt = 0,  iValue = 0;
    bool bRet = false;
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
    printf("enter the number to search :\n");
    scanf("%d",iValue);

    // step2 : use the memory
    bRet = Linearsearch(iPtr, iLength,iValue);
   
    free(iPtr);
    return 0;
}
