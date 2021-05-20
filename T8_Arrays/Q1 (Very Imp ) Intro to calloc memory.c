# include<stdio.h>
# include<stdlib.h>

int main() {

int n ;
printf("Enter the value of n :");
scanf("%d", &n);
    int *pa = (int *) calloc(n, sizeof (int));
                                    // int b[1000];

    printf("Enter %d int values :\n", n );

    for (int i= 0 ; i<n ; i++){
       scanf("%d", pa + i);         //  scanf("%d", b+i (or &b[i]) );
    // scanf ("%d", &pa[i])     // IMPORTATNT \n also matters....

    }

    for (int i= n-1 ; i>-1 ; i--){
          printf ("%d ", *(pa+i));
        //printf ("%d", pa[i] );      // same can be used if not using calloc like scanf

    }



free(pa);
pa = NULL;



return 0;
}
