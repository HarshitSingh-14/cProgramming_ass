# include<stdio.h>

int main(){
    int m, n, o, p;
printf("Write the size of 1st matrix ");
scanf("%d %d", &m , &n );
int a[m][n];
for(int i= 0; i<m; i++){
    for (int j=0; j<n ; j++){
        scanf("%d", &a[i][j]);
    }
}

printf("\n");
printf("Write the size of 2nd matrix ");
scanf("%d %d", &o , &p );
int b[o][p];
for (int i= 0; i<o; i++){
    for (int j=0; j<p ; j++){
        scanf("%d", &b[i][j]);
    }

}

printf("\n");
if (n==o){

int c[m][p];
    for (int i= 0 ; i< m ; i++){
        for (int j=0 ;j< p; j++){
                int sum =0;
                for (int k=0; k < o; k++ ){
            sum += (a[i][k] * b[k][j]);
            }
            printf("%d ", sum);
            sum=0;
        }
        printf("\n");
    }

}

return 0;
}
