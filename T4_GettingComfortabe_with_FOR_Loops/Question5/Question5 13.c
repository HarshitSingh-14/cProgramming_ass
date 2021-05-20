
#include <stdio.h>

 int main() {

    int i,j;
    int n=4 ;


    for (i=1; i<=n; i++){

    for (j=1; j<= 2*i-1; j++) {

        printf("%d", j);

    }

    printf("\n");
    }

    n= 3;

    for (i=1; i<=n; i++){

    for (j=1; j<= 6-(2*i-1); j++) {

        printf("%d", j);

    }

    printf("\n");
    }
  return 0;
}
