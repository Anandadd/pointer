#include<stdio.h>
#include<stdlib.h>
main()
{
    //int *ptr;
   //  printf("%d\n",*ptr);


  /*  int *ptr=NULL;
    printf("%d\n",*ptr);*/

    int *ptr=(int*)malloc(sizeof(int));
    *ptr= 65;
    printf("%d\n",*ptr);
}
