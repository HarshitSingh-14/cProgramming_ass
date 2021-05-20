# include<stdio.h>

int main(){
int s=6;
int n=10;
int sum =0;
int a[10]={1,2,3,4,5,6,7,8,9,10};
for(int i=0; i<n ;i++){
    for(int j=i; j<n;j++){
        sum = sum + a[j];
           }

    }

if (sum ==s){
    printf("x");
}


return 0;
}
