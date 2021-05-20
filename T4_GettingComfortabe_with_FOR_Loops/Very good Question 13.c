#include <stdio.h>

 int main() {

 int n = 12345;
 int sum = 0 , product = 1, reverse = 0 ;

 while (n>0) {
            sum = sum + n% 10 ;
            product  = product * (n%10) ;
            reverse = reverse*10 + (n%10) ;

            n= n/10 ;
        }


        //  OR BOTH

/*
for ( ; n ; n /= 10 ) {

    sum = sum + n % 10 ;
    product = product * (n%10);
    reverse = reverse *10 + n%10;
}


*/

printf(" Sum %d   reverse %d    product %d", sum , reverse, product );
  return 0;
}
