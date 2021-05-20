#include <stdio.h>

 int main() {

    int i,j;
    int n=4 ;
for (i=1; i<=n; i++)
    {
    for(j=1; j<= i; j++){
    printf("%d", n+1-i);
   }

   for (j=1 ; j<=i-1 ; j++){
    printf(" ");
   }
  printf("\n");
}

  return 0;
}
