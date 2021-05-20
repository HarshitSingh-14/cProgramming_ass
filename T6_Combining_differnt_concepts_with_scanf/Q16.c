#include <stdio.h>

double pow(double x, unsigned int n){
    if (n==0) return 1.0; //                  ___  x*f(x, n-1)  when n>0
    return x* pow (x,  n-1);   // f(x,n) ----|
                                        //    ---  1 ,          when n=0
}

int main (){
    double x= 2.0;
    unsigned int n = 6;
    printf ("%g\n ", pow(x, n));
    return 0;

}
