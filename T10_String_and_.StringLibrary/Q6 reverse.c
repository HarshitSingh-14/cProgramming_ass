#include<stdio.h>

int main(){
char c[100];
scanf("%s",c);

char *p = c;


int a=0;
for (int i= 0; c[i]!=0; i++){
    p++;
 a++;
}
p--;
char temp;

for(int i = 0 ;i < a/2; i++){

    temp = c[i];
    c[i]=*(p-i);              // NORMAL SWAP  don't OVERTHINK....
    *(p-i)=temp;

}

                          // OR TWO POINTER



return 0;}
