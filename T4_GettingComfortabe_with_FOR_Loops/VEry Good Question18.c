#include <stdio.h>

 int main() {

 int number = 145;
 int sum_fact= 0;

 for (int temp= number ; temp >0; )  {

    int fact = 1;
    int n= temp % 10;           //... remainder
    for (int i= 1; i<= n ; i++){
        fact*= i;
    }
    sum_fact += fact;
    temp /= 10;
    }

    if (number == sum_fact ){

        printf("%d is a strong number.\n", number);
        } else {
                printf("%d is not a strong number. \n", number);
            }


  return 0;
}
