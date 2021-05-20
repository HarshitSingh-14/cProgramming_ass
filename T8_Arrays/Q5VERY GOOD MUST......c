# include<stdio.h>
# include<stdlib.h>


int countDuplicate(int *a , int size){
    int duplicate = 0;
    char *flags = (char*) calloc (size, sizeof (char));

    for(int i = 0 ; i<size ; i++) {
     if (flags[i] == 0){
        for (int j = i + 1 ; j < size ; j++ ) {
            if (a[i] == a[j]) {
                duplicate++;
                flags[j] = 1;
            }

        }

     }

   }
     free(flags);
     return duplicate;
}



int main(){

    int a[7] = {2, 3, 2, 3, 2, 1, 2 };
    printf("%d", countDuplicate(a, 7));


    return 0;
}
