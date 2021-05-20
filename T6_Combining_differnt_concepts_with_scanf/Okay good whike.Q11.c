#include<stdio.h>

int nextPowerOf2 (int x){

int n= 0 , power=1;

while (x>=power){
    power = power *2;
                                // WHILE -diff condition diff loop
 n++;         // WORK WITHOU ALSO as power nor required...
}
return power;
}




int main(){

printf("%d",nextPowerOf2(111));


return 0;
}
