
#include <stdio.h>

 int main() {
    int i,j;
    int n=4 ;

for (i=1; i<=n; i++){
    for(j=n; j>= 1; j--){
    if (i==1|| i==n|| j==1||j==n)  // AS i =j , opposite so n to 1
        printf("*");
    else printf(" ");
    }

     printf("\n");

     }
  return 0;
}
