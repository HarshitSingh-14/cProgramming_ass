#include<stdio.h>

int main(){
    int a =4, b=10;
    printAllPrimes(a,b);
    return 0;
}

int isPrime(int n) {
    for (int i=2; i<=n/2; i++){
        if (n % i==0)
            return 0;
    }
    return 1;
}


void printAllPrimes(int start , int end) {
    for (; start <= end;start++) {
        if (isPrime(start)){
            printf("%d\n" , start);
        }
    }

}
















