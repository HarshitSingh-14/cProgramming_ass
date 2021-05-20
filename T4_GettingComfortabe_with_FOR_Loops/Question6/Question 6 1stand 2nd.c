#include <stdio.h>

 int main() {

double i, j=0;             // part 2
double n=10;
int sign =1;

    for(i=1; i<=n; i++){
    j = j+ ((sign)*(1/i));      // Or if else
    sign = sign * (-1);

    }


printf("%g", j);
  return 0;
}
