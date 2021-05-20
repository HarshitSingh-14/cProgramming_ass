#include<stdio.h>



int sum( int a ){
if (a/10 < 1) return a;

else {
    return a%10 + sum(a/10) ;
}

}


int main (){

printf("%d ", sum(15627));
return 0;}
