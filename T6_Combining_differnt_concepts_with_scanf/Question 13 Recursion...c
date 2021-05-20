#include<stdio.h>

int f(int n ;) {          //Step 0 --> Draw function of all...
    if (n <= 1 )          //Step1 -- Find out the terminating condition
        return 1 ;              //RECURSION

    return n * f(n-1) ;  // STEp 2 -->  Write the recurive form ...

}


int main (){

    i nt n = 5;
    printf("%d  ", f(n));



return 0;
}
