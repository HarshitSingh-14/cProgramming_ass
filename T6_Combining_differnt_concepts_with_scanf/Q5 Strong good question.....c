
#include<stdio.h>

int strong(int a) {

int sum = 0;
int temp= a;

while(temp > 0) {  // Always try to make as short as possible .....
int fact = 1;     //// SHOULD must be inside while looop as changes value again and again.....

int digit= temp %10;
    for (  ; digit >0; digit-- ){

        fact = fact*digit;

    }


sum = sum + fact;
temp = temp/10;

}



if (sum == a) {
    return 1;
}

else return 0;

}





int range(int a, int b){

for(a; a<=b; a++){

    if (strong(a)==1){ // by default 1
        printf("%d\n", a);
        }
    }
}



int main(){

range(0, 500000);

return 0;}
