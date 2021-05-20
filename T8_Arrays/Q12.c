#include<stdio.h>

int addArray(int a[], int size , int index , int value){
    for (int i = size ; i>index ; i--){
            a[i]=a[i-1];
    }
        a[index]=value;
}


int main(){
int a[10]= {1, 2,3 ,4 ,5 ,6, 7,8,9,10};
addArray(a, 10, 3 , 20);
    for(int i = 0; i<=10; i++){
    printf("%d\n", a[i]);
}
return 0;
}
