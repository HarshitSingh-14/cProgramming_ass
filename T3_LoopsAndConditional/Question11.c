#include <stdio.h>
#include <math.h>

int main(){


int month =5, numberOfDays =0;              //ALWAYS INtialise......

if (month==1 ){

          numberOfDays = 31;

     } else if (month==2){
          numberOfDays =28;
      }else if (month==3){
          numberOfDays =31;
      }else if (month==4){
          numberOfDays =30;
      }else if (month==5){
          numberOfDays =31;
      }else if (month==6){
          numberOfDays =30;
      }else if (month==7){
          numberOfDays =31;
      }else if (month==8){
          numberOfDays =31;
      }else if (month==9){
          numberOfDays =30;
      }
      else if (month==10){
          numberOfDays =31;
      }else if (month==11){
          numberOfDays =30;
      }else if (month==12){
          numberOfDays =31;
      }

      else { printf("wRONG Input\n");
      }


if (numberOfDays>=1 && month<=12){
printf("The number of days in month %d  is %d. \n", month , numberOfDays  );
}
return 0;
}
