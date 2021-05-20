#include <stdio.h>

 int x = 1;

 void f();

 int main() {
 printf("x = %d, &x = %p\n", x, &x);
 //printf("i = %d, &i = %p\n", i, &i); // error: 'i' undeclared
 int i = 2;
 printf("i = %d, &i = %p\n", i, &i);
 {
 int i = 3, j = 4;
 printf("i = %d, &i = %p\n", i, &i);
 printf("j = %d, &j = %p\n", j, &j);
 }

 for (int k = 1; k < 2; k++)
 printf("k = %d, &k = %p\n", k, &k);

 printf("i = %d, &i = %p\n", i, &i);
 //printf("j = %d, &j = %p\n", j, &j); // error: 'j' undeclared
 //printf("y = %d, &y = %p\n", y, &y); // error: 'y' undeclared

 f();

 for (int k = 1; k < 3; k++)
 printf("k = %d, &k = %p\n", k, &k);
 //printf("k = %d, &k = %p\n", k, &k); // error: 'k' undeclared

 return 0;
 }

 int y = 5;

 void f() {
 printf("x = %d, &x = %p\n", x, &x);
 printf("y = %d, &y = %p\n", y, &y);
 //printf("i = %d, &i = %p\n", i, &i); // error: 'i' undeclared
 }
