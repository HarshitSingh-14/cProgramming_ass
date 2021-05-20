#include <stdio.h>

 int main() {
 int a = 4, f(int a);
 f(a);
 }

 int f(int a) {
 printf("Line: %d, a = %d, &a = %p\n", __LINE__, a, &a);
 if (a >= 0) {
 f(a - 1); // recursive call
 }
 printf( "Line: %d, a = %d, &a = %p\n", __LINE__, a, &a);
 // ....printing again because functions are not finished fully together...

 return 0;
 }
