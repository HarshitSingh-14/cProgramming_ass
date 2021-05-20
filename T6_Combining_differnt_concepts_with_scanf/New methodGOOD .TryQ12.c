#include<stdio.h>

int leadingDigit (unsigned int n){
            int last=0;

    while (n){     //while(n!=0)..   // <-- IMPortant..
         last=n;
         n /=10;           // Or simpke
    }
    return last; //TRY understand...
}

int main(){

unsigned int n= 935;

printf("%d", leadingDigit(n));

return 0;
}
