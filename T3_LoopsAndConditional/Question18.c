#include <stdio.h>
#include <math.h>

int main(){
int year =2000;


if (year %400 == 0){

     printf("Leap year");


}  else if ( year%100==0){

    printf(" not a leap year");
}  else if(year%4==0 ) {

   printf("Leap year");

}  else {
  printf(" Not a leap year");
  }



return 0;
}
