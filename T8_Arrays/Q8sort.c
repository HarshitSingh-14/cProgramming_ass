#include<stdio.h>


int main (){
int a[4]={2,5,6,8};
int b[4]={7,3,9,3};

int c[2*4] ;

for (int i =0 ;i< 4; i++){
    c[i]= a[i];
}

for (int i=0 ; i< 4;i++){
    c[i+4]= b[i];
}



for(int i = 0;i<8;i++){
    for (int j=0;j< 8-i-1;j++)
        if(c[j]>c[j+1]){

        int temp = c[j];
        c[j]=c[j+1];
        c[j+1]= temp;}
}

for(int i=0 ;i< 2*4;i++){
printf("%d ", c[i]);
}

return 0;
}
