#include<stdio.h>
int flag = 0;
int main(){
int m=0, n=0 ;
printf("Write the size of matrix : ");
scanf("%d %d " , &m , &n );
int a[m][n];


for(int i=0; i< m ;  i++){
    for (int j=0 ; j< n; j++){
    scanf("%d", &a[i][j]);
    }
}

for (int i=0 ; i< m ; i++){                       // USING FLAG 0-> IDENTITY  1 & -1 for voilating
    for(int j=0; j< n ; j++ ){                     // NOT DIRECT because multiple condition
        if ( i==j && a[i][j]==1 ){
            flag= 1;
        }
        else if(i!=j && a[i][j]==0 ){
            flag = 1;
        }
        else {
            flag=0;
            break;
        }
    }
}

if(flag ==1 ){
    printf("Identity");
}
else{
    printf("Not IDentity");
}



return 0;
}
