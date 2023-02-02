#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr=NULL;
    {
        int a=5;
        ptr=&a;
        printf("a=%d\n",*ptr);
    }
    printf("%d\n",*ptr);
}
