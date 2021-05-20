# include<stdio.h>
# include<stdlib.h>

int main(){

int a[] = {1, 3,6,763,67,6,4,};
int size=7;

for (int i = 0; i < size; i++ ){
    if ((a[i])% 2 == 0 ) {     // SILLY % and /
            printf("%d ", a[i]);
    }
}
printf("\n");

for (int i = 0; i < size; i++ ){
    if ((a[i])% 2 != 0 ) {     // SILLY % and /
            printf("%d ", a[i]);
    }
}


return 0;
}
