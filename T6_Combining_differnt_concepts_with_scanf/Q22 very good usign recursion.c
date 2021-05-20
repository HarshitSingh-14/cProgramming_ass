#include<stdio.h>

int gcd(int a, int b){
    if(b!=0){
        return gcd(b,a%b);
    }

    else  {
        return a;
        }
    }

int main(){

printf("%d", gcd(16,3));

return 0;
}
