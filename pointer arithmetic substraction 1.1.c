#include<stdio.h>
main()
{
    int a[]={0,1,-1,10,11};
    int *p=a;
    int *q=&a[4];
    printf("value of %d\n",*p);
    printf("value of %d\n",*q);
    printf("p-q =%d\n",p-q);
    *q=25;
    printf("value of %d\n",*q);
    printf("q-p =%d\n",q-p);
    *p=27;
    q=q-3;
    p=p+3;
    printf("value of %d\n",*p);
    printf("value of %d\n",*q);
    printf("p-q =%d\n",p-q);

}
