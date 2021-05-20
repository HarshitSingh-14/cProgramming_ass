#include <stdio.h>
#include <math.h>

int main(){

int marks = 90;
char grade = 'X';

grade = marks >= 90 && marks <= 100  ? 'A'  : grade ;
grade = marks >= 80 && marks <= 79  ? 'A'  : grade ;
grade = marks >= 70 && marks <= 69  ? 'A'  : grade ;
grade = marks >= 60 && marks <= 59  ? 'A'  : grade ;
grade = marks >= 50 && marks <= 49  ? 'A'  : grade ;
grade = marks >= 40 && marks <= 39  ? 'A'  : grade ;
grade = marks >= 0 && marks <= 29  ? 'A'  : grade ;


printf("%c ", grade);





return 0;
}
