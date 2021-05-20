#include<stdio.h>

int main(){
    char c[100];
    gets(c);
    char *p1 = c;
    char *p2 = c;
    int i =0;
    while (*p2){
        p2++;
        i++;
    }




    int flag=0;
    for (int j=0; j< i ; j++){
        if(*(p1+j) == *(p2-1 -j) ){
            flag = 1;
        }
        else flag=0;
            break;
    }
    if(flag==1){
        printf("p");
    }
    else if(flag==0){ printf("not");
    }

return 0;
}
