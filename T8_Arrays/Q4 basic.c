#include<stdio.h>

int main(){

int a[7]= {1,2,3,4,5,6,7};
int b[7];


for(int i=0; i<7; i++){
b[i]=a[i];
}
for (int i=0; i<7;i++){
printf("%d ",b[i] );}

return 0;
}
