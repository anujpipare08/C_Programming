#include<stdio.h>
struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};
int main()
{
    printf("size of structure is :%d\n",sizeof(struct  Demo));//20
    return 0;
}