#include <stdio.h>
#include <math.h>
int main (){

float a = 1, b= -9 , c= 4;


float root1 = (-b + pow((b*b - 4*a*c),0.5)) / (2*a);

float root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);



printf( "%f %f" ,root1, root2);


return 0;
}
