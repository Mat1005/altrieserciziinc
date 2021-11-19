#include <stdio.h>

int main()
{
   int n;
   int a;
   printf("Quanti numeri vuoi inserire?");
   scanf("%d", &n);
   for(int i=0;i<=n;i++){
       a=i*i;
       printf("%d\n",a);
       
   }
}

