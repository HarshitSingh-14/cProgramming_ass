#include<stdio.h>
#include<stdlib.h>

int main (){
int n;
printf("Write the size of array ? ");
scanf("%d" , &n );

int *pa = (int * ) calloc(n, sizeof (int ));

for (int i = 0 ; i<n ; i++){

    scanf ("%d" , pa+i );
}
int sum=0 ;
for (int i = 0; i<n ; i++){

    sum = sum + pa[i];


}

printf("%d is the sum of digits", sum );



free(pa);
pa= NULL;

return 0;
}
