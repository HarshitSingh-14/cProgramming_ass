#include<stdio.h>
int isArmstrong(int n){
int remainder =n;
int digit= 0;
int sum=0;
        for( ;remainder>0 ; )
        {
            digit = remainder%10 ;
            sum = sum +(digit)*(digit)*(digit) ;
            remainder=remainder/10;

            }
if(sum==n){
    printf("it is an armstrong number");
    }
else printf("it's not");
}



int main (){

isArmstrong(1);


return 0;
}
