#include <stdio.h>

int main (void){
    int n, k = 1, j = 2;
    scanf("%d",&n);

    while(k != 0){

        if(n == 1){
           printf("NO\n");
            return 0;
        }
        k = n % j;
        j++;

       if(j >= n) 
        break;
    }

    if(k == 0)
        printf("NO\n");
    else
        printf("YES\n");
}