#include<stdio.h>
#include<stdlib.h>
main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
   // printf("%d\n",*ptr);
   ptr=NULL;
   printf("%d\n",ptr);
}
