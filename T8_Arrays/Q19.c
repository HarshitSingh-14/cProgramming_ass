#include<stdio.h>

int main(){
   int m , n ;
   printf("Write the size of matrix : ");
   scanf("%d %d", &m , &n);
    int a[m][n];
    for (int i= 0; i< m; i++){
            for(int j = 0 ;j<n ;j++){
        scanf("%d", &a[i][j]);
    }
}

for (int j= 0; j< m ; j++){
    int sum =0;
    for (int i= 0; i<n ; i++){
        sum = sum+ a[j][i];
    }
    printf("%d\n", sum);
}
for (int j= 0; j< n ; j++){
    int sum =0;
    for (int i= 0; i<m ; i++){
        sum = sum+ a[i][j];
    }
    printf("%d ", sum);
}
return 0;
}
