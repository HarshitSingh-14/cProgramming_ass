#include<stdio.h>
#include<stdlib.h>
int *copy(int *pa , int size){  // CAN USE STAR OR NOT own
        int *copy = (int*) calloc (size, sizeof (int));
        for (int i=0; i < size; i++){

        copy[i] = pa[i] ;

         }
    return copy;
}


int count (){
int nos= 0;
int *copy(int *pa , int size ){

    }
}

int main(){

int n=0 ;
printf("Enter the size of array :");
scanf("%d", &n );

int *pa = (int*) calloc (n, sizeof(int));

printf("Enter the values");

for (int i=0 ; i< n ; i++){

    scanf ("%d", &pa[i]);
}


    int *aCopy = copy(pa, n);
    for (int i =0; i<n; i++){             // ...print....
        printf("%d ", *(aCopy +i));
    }


    free(aCopy);
    free(pa);
    pa=NULL;





return 0;
}
