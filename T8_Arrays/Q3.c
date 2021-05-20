# include<stdio.h>
# include<stdlib.h>

int min (int *pa, int size){

    int min = *(pa);
    for (int i = 1 ; i < size ; i++){

        min = min > pa[i] ? pa[i]: min;
    }

    return min;

}




int main(){
int n  ;
printf("Write the size of array ?");

scanf("%d", &n );

int *pa = (int *) calloc (n , sizeof (int));
printf("Enter\n");
for(int i=0; i<n ; i++){

    scanf("%d ", pa+i );

}

printf("%d is the min", min(pa, n ));



free(pa);
pa = NULL;

return 0;
}
