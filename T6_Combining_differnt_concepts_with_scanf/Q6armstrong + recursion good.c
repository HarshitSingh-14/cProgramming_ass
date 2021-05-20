#include<stdio.h>

int armstrong(a){

int x = a;
int sum = 0;

while (x > 0){  // NOT (x%10 > 0)  imp as 407 gets missed as due to 0
    sum = (x%10)*(x%10)*(x%10) + sum ;
    x= x/10;

}


{if (a== sum ){ // Dont forget  ==
    return 1;
}}

return 0;







}


int range(int a,int b){

    for (a ; a<=b ; a++){

    if (armstrong(a)){
        printf("%d\n", a);
    }

    }

}



int main(){


range(1,400000);

return 0;
}
