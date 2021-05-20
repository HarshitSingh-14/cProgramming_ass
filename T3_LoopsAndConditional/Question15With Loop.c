#include <stdio.h>
#include <math.h>

int main(){

int n = 407;
int remaining = n, sum = 0;


while (remaining>0){
int digit = remaining %10;
remaining /= 10;
sum += digit * digit *digit;

 }


if (sum ==n){
printf("%d is an Armstrong number\n ",n);
} else {
   printf("%d is not an armstrong number \n" ,n);

}
return 0;
}
