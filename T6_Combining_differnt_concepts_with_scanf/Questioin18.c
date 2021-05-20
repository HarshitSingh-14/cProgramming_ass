#include<stdio.h>

int sumOfOdd (int a,  int b){

    if (a>b) {
        return 0;
    }

    else {
        if (a%2 != 0){
            return a + sumOfOdd(a+2, b);       }
    else  a= a-1;
        return a-1 + sumOfOdd(a+2, b);

        }
}

int main(){

printf("%d ",sumOfOdd(2,3));

return 0;}


