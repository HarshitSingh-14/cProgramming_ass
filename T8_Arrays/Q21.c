#include<stdio.h>

int main(){
int number = 8;
int a[10]= {1,2,3,4,5,6,7,8,9,4};
int count = 0;
    for (int i=0; i<10; i++){
    for(int j=0; j<10; j++){

    if(a[i]+a[j]==number){
            count++;
      }
   }
}

printf("%d",count/2);
return 0;
}
