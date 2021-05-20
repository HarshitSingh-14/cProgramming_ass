# include<stdio.h>

int moreThanHalf(int a[], int size, int integer){
int count = 0 ;
for (int i= 0; i< size; i++){
        if(a[i] == 1 ){  // ==  ** VERY SILLY
        count++;
    }
}
    if(count> size/2){
        printf("%d appears more than half times",integer );
    }
    else printf("Does not appear more than half times");

}
int main (){

int a[10] = {1,1,1,1,1,1,2,3,4,5};

moreThanHalf(a,10, 1);

return 0;
}
