#include <stdio.h>

 int main() {

    int a = 7, b= 14 ;
                            // LCM divide fully with no remainder
    int lcm = 0, max= a>b ? a:b;     //  min LCM can be maximum number
    for (lcm = max ; ; lcm ++)  {   // ADD at last in for loop ]
        if ( lcm % a == 0 && lcm %b == 0){

            break;
            }
        }

 printf("LCM is : %d", lcm);

  return 0;
}
