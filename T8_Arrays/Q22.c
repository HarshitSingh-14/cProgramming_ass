#include<stdio.h>

int smallestPositive(int a[], int size){
    int i, min = a[0], j;

    for(int i = 0; i < size; i++){
        if (a[i] > 0) {
//   Not right..min = min ? a[i] > min : a[i];
                min = min > a[i] ? a[i]: min ;

            }
           else return 0;

       }
        return min - 1;
}



int main(){
    int a[10]= {-1,2,4,6,8,9,10,13,12,6};
    printf("%d", smallestPositive(a, 10));
return 0;
}
