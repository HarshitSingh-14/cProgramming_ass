#include <stdio.h>
#include <math.h>

int main(){

double A =180-1-22/7, B= 1, C= 22/7;            // for input like non terminating:: 22/7

double max_error = 0.000000001;
double error = A+B+C -180.0;
error = error >0 ? error : -error ;       // Frequent PRECISION Technique --> As finite bits can be used...
                                         //  if x and y are double,float and other
                                        // Never write x=y
                                        // Rather difference = x-y >0 ? x-y: y-x;
                                        // if diff< tol;

if (error < max_error && A>0 && B>0 && C>0){
       printf("valid");

} else {
        printf("Invalid");
       }
return 0;
}
