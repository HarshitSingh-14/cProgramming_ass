#include <stdio.h>
#include <math.h>
int main (){


int a = 10 , b=-3, c=52;

int min = (a>b)&&(b>c) ? c : (b>a?a:b);    //int min = (a < b) ? (a < c ? a: c) : (b < c ? b : c );




printf("%d", min);


return 0;
}
