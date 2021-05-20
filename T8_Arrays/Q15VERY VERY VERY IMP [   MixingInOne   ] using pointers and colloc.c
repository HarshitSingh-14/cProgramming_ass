#include<stdio.h>

void add(int **a, int **b, int **c, int m, int n){
    for(int i=0 ; i< m ; i++){
        for (int j =0; j< n ; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void sub (int** a, int **b , int **c,int m ,int n){
for (int i = 0 ; i<m ;i++){
        for(int j= 0; j<n ; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void print2DArray(int **a, int m , int n){
    for (int i = 0; i< 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void scan2DArray(int **a , int m , int n ){
    for (int i=0; i< m ; i++){
        for (int j=0;j<n ;j++){
            scanf("%d", &a[i][j]);
        }
    }
}
    // ** is pointers ....
int **create2DArray(int m, int n) {
    int **a = (int **) calloc(m, sizeof(int *));
    for (int i=0; i< m ; i++){
        a[i]=(int *) calloc (n, sizeof(int *));
    }
    return a;
}

int **destroy2DArray(int **a, int m){
    for (int i=0; i<m; i++){
        free(a[i]);
    }
    free(a);
    return NULL;
}

int main(){
    int m = 3, n = 3;

    //  SAME THING(int **) calloc(m, sizeof(int *));  // POINTER TO POINTER 2D array
    int **a = create2DArray(m,n);                                                              // calloc mallock
    int **b = create2DArray(m,n);
    //int **c = create2DArray(m,n);
    //add ( a , b , c , 3, 3);
    printf("Enter A[%d X %d] : \n", m, n);
    scan2DArray(a,m,n);
    printf("A [%d X %d]:", m, n);
    print2DArray(a,m,n);

    printf("Enter B[%d X %d] :", m , n);
    scan2DArray(b,m,n);
    printf("B[%d X %d ]:", m, n);
    print2DArray(b,m,n);

    int **c = create2DArray(m, n);
    add(a,b,c, m ,n);
    printf("C[%d X %d]: \n", m, n);
    print2DArray(c,m,n);

    sub(c, b, c, m, n);
    printf("c[%d X %d ]:", m, n);
    print2DArray(c,m,n);

    a =destroy2DArray(a,m);
    b =destroy2DArray(b,m);
    c =destroy2DArray(c,m);

return 0;
}
