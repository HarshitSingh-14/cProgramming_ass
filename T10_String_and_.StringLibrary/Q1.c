#include<stdio.h>

int main(){

    char a[]="HELLO"; // char*pa = "HELLO"         o/r      char a[]={'H', 'E'...}
    printf("%p %p %p %p %p", &a[0], &a[1], &a[2], &a[3] , &a[4]);

return 0;}
