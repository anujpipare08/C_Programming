#include<stdio.h>
struct Demo
{
    int i;
    char ch;
    float f;
    int j;
};
int main()
{
    printf("size of structure is :%d\n",sizeof(struct  Demo));//16
    return 0;
}