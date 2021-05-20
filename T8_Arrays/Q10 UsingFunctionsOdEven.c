# include<stdio.h>

int isOdd(int n ){
return n%2;     // 1 means true statement...
}

int main (){


    int all[10]={1,2,3,4,5,6,7,8,9,10};
    int odd[10];
    int even[10];

    int o = 0, e=0;

    for (int a =0; a <10 ; a++){
        if (isOdd(all[a])){
            odd[o++]= all[a];    // add in next...
            }
            else {
                even[e++]=all[a];
            }
        }



    printf("Odd number :  ");

    for (int i= 0 ;i < o ; i++){
        printf("%d ", odd[i]);
    }


    printf("Even numbers : ");

    for (int i =0 ;i< e; i++ ){
        printf("%d ", even[i]);
    }


return 0;
}


