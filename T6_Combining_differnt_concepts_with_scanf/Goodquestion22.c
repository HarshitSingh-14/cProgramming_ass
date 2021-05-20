#include<stdio.h>

int gcd(int a , int b){
int i=1;
for (i=a; i>0; i--){
if (a%i==0 && b%i==0)
    return i;}
}

int main(){
    printf("%d", gcd(18,12));


    return 0;
}
