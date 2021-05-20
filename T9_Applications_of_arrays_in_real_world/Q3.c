#include<stdio.h>

int main(){
int a[100],b[100];
int m=5,n=2;



for(int i=0 ; i<m; i++){
    scanf("%p", &a[i]);
}

for(int i=0 ; i<n; i++){
    scanf("%p", &b[i]);                      // Or can use third array .....
}

int k=0;
for(int i =0;i<m;i++){
     for (int j=0;j<n;j++){
        if(b[j] ==a[i]){
            k++;
        }
     }
}


if (n==k){
    printf("is a subarray");
}
else printf("not a subarray");
return 0;
}
