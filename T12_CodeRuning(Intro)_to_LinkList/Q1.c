#include<stdio.h>

int main(){


char char1='y';

do{printf("Write two numbers : ");
int a=0, b=0;
scanf("%d  %d", &a , &b );

printf("To add press a\n");
printf("To sub press b\n");
printf("To multiply press c\n");
printf("To divide presss d\n");
    char ch;
    scanf(" %c", &ch);

    switch(ch){
        case 'a': printf("%d\n" ,a+b);
            break;
        case 'b': printf("%d\n" ,a-b);
            break;
        case 'c': printf("%d\n" ,a*b);
            break;
        case 'd': printf("%d\n" ,a/b);
            break;
         default: char1='n';
    }
    if(char1=='y'){
printf("Do you want to quit (y,n)\n");
            scanf(" %c",&char1);
    }
}
while(char1=='n');


return 0;}
