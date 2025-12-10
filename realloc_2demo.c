#include<stdio.h>
#include<stdlib.h>

int main()
{

int *Arr = NULL;

//step 1: aalocate the memory
Arr = (int*)malloc(5 * sizeof(int));

//step2 : use the memory

Arr = (int *)realloc(Arr,3*sizeof(int));
//step3 : free the memory
free(Arr);

return 0;
}