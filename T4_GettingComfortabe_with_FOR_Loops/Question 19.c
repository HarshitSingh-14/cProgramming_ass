#include <stdio.h>

 int main() {

    int number = 12;
    int temp = number ;
    int i=1;
    int factors= 1;
    printf("Factors are -->");
    for (i; i<= number ; i++)
        {

       if (number %i==0){
             factors= i;
             printf("%d ,",factors);}

    }


  return 0;
}
