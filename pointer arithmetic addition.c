#include<stdio.h>
main()
{
    int a[5]={3,4,-2,-8,0};
    int *p=&a[0];
    printf("value of %d\n",*p);
    printf("address of element is %d\n",p);
    p=p+2;
   // *p=34;
    printf("value is %d\n",*p);
    printf("address of elements %d\n",p);
}
