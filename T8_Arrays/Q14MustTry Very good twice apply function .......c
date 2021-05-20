#include<stdio.h>

second (int a[] ,int max1){
    int max2 = a[0];
    for(int i=1; i< 10 ; i++){
        if(a[i]<max1 && a[i]> max2){
            max2 = a[i];
        }
    }
    return max2;
}

firstMax(int a[]){
   int max1 = a[0];
    for(int i=1 ; i< 10; i++){
         if( a[i] > max1 ) {
            max1= a[i];
         }
    }
    return second(a, max1);
}



int main(){
int a[10] = {3,7,922,8,3,68,4,789,25,6};

printf("%d ", firstMax(a));

return 0;
}
