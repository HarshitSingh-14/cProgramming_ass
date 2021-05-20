#include<stdio.h>
int sumOfEven (int a ,int b) ;



int main (){


printf("%d", sumOfEven(3, 7) );
return 0;
}

int sumOfEven (int a , int b) {
if (a> b)
    return 0;
else
{
    if (a%2==0){
        return (a+ sumOfEven(a+2, b));
    }
    else a= a-1;
         (a + sumOfEven(a+2, b));
}
}
