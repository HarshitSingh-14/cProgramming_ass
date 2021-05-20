# include <stdio.h>

int main(){
    int m ,n ;
    printf("For matrix m x m  Write m : ");
    scanf("%d %d\n", &m, &n  );
int a[m][n];
for(int i=0; i<m; i++){
    for (int j=0; j< n ; j++){
        scanf("%d", &a[i][j]);
    }
}

printf("\n");
int b[n][m];
for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
        b[i][j] =a[j][i];

    }
}

for(int i= 0; i<n; i++ ){
    for (int j=0; j< m; j++){
        printf("%d ", b[i][j]);
    }
    printf("\n");
}




return 0;
}
