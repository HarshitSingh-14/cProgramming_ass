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
 printf("\n");
    int b[m][n];
for (int i= 0; i< m; i++){
            for(int j = 0 ;j<n ;j++){
        scanf("%d", &b[i][j]);
    }

}
 printf("\n");
 printf("\n");

for (int i= 0; i< m; i++){
            for(int j = 0 ;j<n ;j++){
        printf("%d ", a[i][j] - b[i][j]);
    }
    printf("\n");
}
return 0;
}
