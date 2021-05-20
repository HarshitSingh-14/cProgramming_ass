# include<stdio.h>
# include<stdlib.h>

int odd(int a[], int size){
    int count = 0;
    for (int i = 0; i< size; i++){
        if (a[i] % 2 == 1){
            count++;
            printf("%d", a[i]);
        }

    }
    return count;
}


int main(){
int a[]={1, 3 , 8, 7, 4};

printf("%d" , odd(a,5));

return 0;
}
