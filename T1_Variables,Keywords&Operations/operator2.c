#include <stdio.h>

int main (){

    int a= 7, b=5, c=0, d=5, result= 0, x=0 ,z=0 ,t=0;

    result =b== d;           // Operator 1 a==b            True false opeartor YES 1  NO 0
                             // Operator 2 a!=d
                             // operator 3 >, > , >=,<=

    printf("%d\n", result );

    x= a|b;
                             // operator 4 &&  and (both)
                             // operator 5 ||  or (either)  BIG with brackets
                             // operator 6  & bitwise and operator
                             // operator 7  | bitwise or operator
                             // operator 8  ^ bitwise xor operator
                             // operator 9  ! operator !0 = 1, !x=0
      printf("%d\n", x);


     // a/=b                // OR a=a/b
      z=~a;
      printf("%d\n", z);    // Assignment operator 10   a=
                          // operator 11  ~ bit wise oppsite sign opperator
                            //16 or 32 bit in computers



                            // result a= b      ?     c : d'
                            //       condition  if    than

t= (a>b?    (a>c? a:c)
             :
        b>c ? b: c;)
 printf("%d" , t );
    return 0;

       }
