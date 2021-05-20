#include <stdio.h>
#include <math.h>

int main(){

double a = 3;
double b = 3;
double c = 9;
double max_error = 0.0000001;
if(
   a+b > c &&
   a+c > b &&
   b+c > a &&
   a > 0 &&
   b > 0&&
   c > 0)


     {


       double d_ab = a-b >0 ? a-b : b-a;
       double d_bc = b-c >0 ? b-c : c-b;
       double d_ca = c-a >0 ? c-a : a-c;
       if (d_ab< max_error && d_bc < max_error) {

            printf("equilaterAL");
       }
      else if ( d_ab< max_error||d_bc<max_error|| d_ca<max_error) {printf("Isoceles");
     }else if(d_ab> max_error && d_bc> max_error && d_ca> max_error){printf("Scalene");
     }

}
else {printf("Invalid triangle");
                   }
return 0;
}
