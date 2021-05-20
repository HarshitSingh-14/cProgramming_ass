#include <stdio.h>

    int main() {

    int i= 0;
    int previous = 1;
    int twoprevious= 0;
    int n=20;

    for (i; i<=n  ; i++ )   // numbering always in differnt loop
    {   printf("%d \n", previous);

        int temp= previous + twoprevious;
        // temp as two previous changeing

        // ALGORITH = replace next each time......
        twoprevious = previous;
        previous= temp;


            }


  return 0;
}
