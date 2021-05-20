#include<stdio.h>

int addArray(int a[], int size , int index , int value){
    for (int i = size ; i>index ; i--){
            a[i]=a[i-1];
    }
        a[index]=value;
}




int main(){
int a[10]= {1, 2,3 ,4 ,5 ,6, 7,8,10,11};
int number = 3;
int p= 9;
for(int i= 9; i>-1 && a[i] > number ; i--){    //... Goood do not make condition i+1  & i-1 .....
  p=i;
}
addArray(a, 10, p , number);
    for(int i = 0; i<=10; i++){
    printf("%d ", a[i]);
}
return 0;
}
