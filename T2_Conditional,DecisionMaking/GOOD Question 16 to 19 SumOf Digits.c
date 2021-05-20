#include <stdio.h>

int main (){


int n= 12321;

int a=0,b=0,c=0,d=0,e=0;


e= n%10;
d= (n/10)%10;
c= (n/100)%10;
b= (n/1000)%10;
a= (n/10000);




printf("%d\n",a );
printf("%d\n",b );
printf("%d\n", c);
printf("%d\n",d );
printf("%d\n",e );


int opposite = (e*10000)+ (d* 1000)+ (c*100) +(b*10)+a;

opposite = (opposite %10 !=0 )? opposite:opposite/10;
opposite = (opposite %10 !=0 )? opposite:opposite/10;
opposite = (opposite %10 !=0 )? opposite:opposite/10;
opposite = (opposite %10 !=0 )? opposite:opposite/10;


                                   //    FOR aNy DIGIT NUMBERS......

printf ("%d\n", opposite);



int sum = a+b+c+d+e;

printf("%d\n", sum);



int product = a*b*c*d*e;

printf("%d\n", product);




char ch = (n==opposite)?'Y' : 'N';
printf("%c",ch);



return 0;
}
