#include <stdio.h>

 int main() {
    int a= 12253;
    int digits=1;
    for (; a= a/10; digits++ )   ;
// int becomes ...

        printf("%d", digits);

  return 0;
}
