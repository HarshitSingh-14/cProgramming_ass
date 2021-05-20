#include <stdio.h>

 int main() {


    int n=5;
    int i,j;
    for (i=1; i<=n; i++){

            for(j=1 ; j<=n-i; j++){

                printf(" " );

            }

        int k=0 ;
        for (int j= 1; j<=i ; j++){
            printf("%d", k);
            k++;
        }
        printf("\n");


    }


  return 0;
}
