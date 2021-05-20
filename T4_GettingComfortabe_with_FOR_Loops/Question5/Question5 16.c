#include <stdio.h>

int main()
{
    int i, j, n=4;



    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1-i; j++)
        {
            printf("<");
        }

        for(j=1; j<=(i-1); j++)
        {
            printf(" ");
        }

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

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf(">");
        }




        printf("\n");
    }


    return 0;
}
