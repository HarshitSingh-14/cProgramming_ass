#include <stdio.h>

 int main() {
 int i, j ;
 int n=4;
 for (i=1; i<=n; i++ )  {


    for (j=1; j<=n-5+i ; j++)
    { printf(" ");  }  // Silly mistkake j inside brAcket...

    for (j=1; j<=n+1-i; j++){

        printf("%d", n+2 -i -j);    //Any other...
    }

    printf("\n");



    }

  return 0;
}
