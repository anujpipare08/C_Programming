#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};
int main()
{
    printf("size of structure is :%d\n",sizeof(struct  Demo));//14
    return 0;
}