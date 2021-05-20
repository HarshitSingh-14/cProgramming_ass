
#include <stdio.h>

 int main() {
     int k=1;
    int i,j;
    int n=5 ;
for (i=1; i<=n; i++){
    for(j=1; j<= i; j++){
        printf(" %d",k );
        k= (k+1)%10;   // NICE concept must try.....
    }
    printf("\n");
}
  return 0;
}
