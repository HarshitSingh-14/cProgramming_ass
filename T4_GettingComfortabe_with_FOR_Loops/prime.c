#include <stdio.h>
#include <math.h>

int main(){

    int n = 9, i = 0;
    for (i=2; i< n ; i++){
        if (n% i == 0){
            break;
        }
    }

    if ( i==n){
        printf("%d is prime.\n",n);
   } else {
        printf("%d is not prime. \n");

    }
return 0;
}
