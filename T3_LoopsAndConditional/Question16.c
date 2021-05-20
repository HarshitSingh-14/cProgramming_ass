#include <stdio.h>
#include <math.h>

int main(){

double basic= 20000.0;

double gross = 0.0;

if (basic <= 30000.0){
    gross = basic + 0.2  *basic + 0.3 *basic;

 } else if (basic <= 60000.0){
  gross = basic + 0.25 * basic + 0.35 * basic;

 } else if (basic> 60000.0){
     gross = basic + 0.3 * basic + 0.4 * basic;
 }

 printf("%g", gross);

return 0;
}
