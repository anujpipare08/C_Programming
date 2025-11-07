#include<stdio.h>
#include<stdlib.h>

int main()
{

int length = 0;
int *Arr = NULL;

printf("Enter the number of elements :\n");
scanf("%d",&length);
//step 1: aalocate the memory
Arr = (int*)malloc(length * sizeof(int));
if(Arr == NULL)
{
    printf("Unable to allocate memory\n");
}
else
{
    printf("Memory gets succesfully allocated\n");
}

//step2 : use the memory
//step2 : free the memory
free(Arr);

return 0;
}