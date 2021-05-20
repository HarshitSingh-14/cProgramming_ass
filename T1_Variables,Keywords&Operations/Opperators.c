#include <stdio.h>
int main (){
int a = 7, b=5, c=0, d=5, result = 0, r=0,k=0,l=0;
result = a+b;                   //OR a=a+b
printf("%d\n" , result );            // Operators  + -/*  % Modulo operator   ++i  i--  pre, post

r = a%b;
printf("%d\n" , r);


double x= 7, y=5, risult=0 ,p=0;
risult = a/b;
p=a/y;
printf("%1g %1g \n", risult, p );     //Only 2 data types integer than integer



int i=1;
k = a+ ++i;        // or  i=i+1;  THAN   k= a+i;
printf("%d\n", k);

int j=1;
l= a+j++;
printf("%d", l);   // or l= a+i;  THAN   i= i+1;

}
