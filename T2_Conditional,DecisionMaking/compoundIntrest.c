#include <stdio.h>
#include <math.h>


int main (){
int n=4;
float p= 1000, i= 8;
float a = p* pow((1+i/100.0 ), n);

printf ("%g\a%g",a,a);


return (0);
}
