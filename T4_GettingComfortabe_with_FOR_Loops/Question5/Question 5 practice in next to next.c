#include <stdio.h>

int main()
{
    int i, j, n=5;



    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");                     // next to next in a line
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
