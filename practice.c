#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 0;
    int *Arr = NULL;

    printf("Enter iSize for malloc : \n");
    scanf("%d", &iSize);

    Arr = (int*)malloc(iSize*sizeof(int));

    if(Arr == NULL)
    {
        printf("Unable to allocate memory");
    }
    else{
        printf("Memory allocated successfully");
    }
    return 0;
}