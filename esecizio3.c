#include <stdio.h>



int main()
{
    int a;
    int b;
    
    printf("Inserire due numeri a e b per vedere a^b");
    scanf("%d", &a);
    scanf("%d", &b);
    int p=a;
    for(int i=1;i<b;i++){

        a=a*p;
        
    }
    printf("La potenza a^b e' uguale a %d",a);
    
}

