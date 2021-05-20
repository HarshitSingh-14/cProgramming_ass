#include <stdio.h>

 int main() {
 int a = 2, b = 3;
 void swap(int *, int *);
 swap(&a, &b);
 printf("a = %d, b = %d", a, b);
 }

 void swap(int *pa, int *pb) {
 *pa ^= *pb;
 *pb ^= *pa;
 *pa ^= *pb;
 }
