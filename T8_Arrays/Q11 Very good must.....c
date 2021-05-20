#include<stdio.h>

int deleteArray(int *a , int size ,int index) { // a[]
int temp = a[index];
for (int i= index+1; i<size ;i++){
    a[i-1] = a[i];
    a[size] = 0;
    }
    return temp;
}
int main(){

int a[7]= {1, 2,3 ,4 ,5 ,6, 7};
printf("    %d\n", deleteArray(a, 7, 2 )); // deleted array

    for(int i = 0; i<6; i++){
    printf("%d\n", a[i]);
    }
//printf("%d", sizeof(a));

return 0;
}
