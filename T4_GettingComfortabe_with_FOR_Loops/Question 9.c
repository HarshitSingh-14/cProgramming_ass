#include <stdio.h>

 int main() {

        int a = 12, b= 18 ;

    int gcd = 0 , min = a<b ? a: b;

    for (gcd=min ; ;gcd--   ){

        if (a%gcd == 0 && b% gcd== 0 ){

            break;
            }
        }
    printf("GCD is %d", gcd);
  return 0;
}
