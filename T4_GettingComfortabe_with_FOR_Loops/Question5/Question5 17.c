
#include <stdio.h>

 int main() {
    int i,j;
    int n=4 ;

    for (i=1; i<=n ; i++)
    {  int n= 3;



        for(j=n; j>=i-1; j--)
        {
            printf("(");
        }

        for(j=1; j<=2*i-2; j++)
        {
            printf(" ");
        }

        for(j=n+1; j>=i; j--)        // For in a line inside one loop
                        // For down m=new loop ech time copy paste
        {
            printf(")");
        }

        printf("\n");
 }






 for (i=1; i<=n ; i++)
    {



        for(j=1; j<=i; j++)
        {
            printf("(");
        }

        for(j=1; j<=2*n-2*i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)        // For in a line inside one loop
                        // For down m=new loop ech time copy paste

        {
            printf(")");
        }

        printf("\n");
 }



  return 0;
}
