#include<stdio.h>

int numberOfDigits(int a){

if (a/10 < 1) return 1;
else return 1+ numberOfDigits(a/10);
}

int main(){

    printf( "%d" ,numberOfDigits(789));



return 0;
}
