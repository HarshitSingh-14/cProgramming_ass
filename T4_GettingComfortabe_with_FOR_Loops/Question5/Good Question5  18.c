#include <stdio.h>

int main()
{
    int i, j, n=4;



    for(i=1; i<=n; i++)
    {
        for (j=1 ; j<= 2*i-1; j++){
       { if ((i+j)%2==0){
        printf("1");}
        else printf("0");
    }


    }printf("\n");
    }





     n=3;




       for(i=1; i<=n; i++)
    {
        for (j=1 ; j<=7 - (2*i); j++){
       { if ((i+j)%2==0){       // oNly one way 1 to n hard other wise

        printf("1");}
        else printf("0");
    }


    }printf("\n");
    }


    return 0;
}
