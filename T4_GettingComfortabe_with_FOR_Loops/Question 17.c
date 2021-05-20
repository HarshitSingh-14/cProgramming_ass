#include <stdio.h>

 int main() {

 int n= 5;
 int i;
 int fact=1;    // Think according what to do....

 for(i=1; i<=n; i++){

    fact*= i;
  }

 printf("Factorial = %d", fact );

  return 0;
}
