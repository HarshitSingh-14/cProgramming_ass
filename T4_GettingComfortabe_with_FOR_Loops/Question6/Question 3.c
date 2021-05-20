#include<stdio.h>

int main(){
float n= 1.0 ;
float sum =0.0;
float sign = 1.0;


while (n>0&& n<1000000){
sum = sum + (sign * 1)  / (  2*n - 1);
sign = (-1) * sign ;

n++;
}

printf("%f", 4*sum);

return 0;
}
