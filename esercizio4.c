#include <stdio.h>

int main()
{
    int n;
    int tot;
    int max=0;

    printf("Quanti numeri vuoi inserire?");
    scanf("%d", &tot);
    int numbers[tot];
    for(int i=0; i<tot; i++){
       printf("Inserire un numero ");
       scanf("%d", &n);
       numbers[i]=n;
       if(n>max){
           max=n;
       }
       
    }
    printf("il maggiore è %d",max);
}

