#include<stdio.h>
#include<math.h>

int main(){
    int a= 100 , i , j;
     //START from mid as easiest
    for (i=a ; i%100==0 ; i=1)     // j= 1 to break loop
    {
        for (i= a ; i%400!= 0; i=400)  //i=400 to br3ak loop

        {

           printf("%d is not leap year\n",i);

        }

        for (i=a; i%400==0; i=1)
        {
            printf("%d is a leap year\n ", i);
        }

    }

    for (i= a ; i%100 != 0 ; i = 100)

    {
          for (i=a; i%4!= 0; i= 4){

            printf("%d is not a leap year \n ", i);

            }

            for (i= a; i%4==0 ; i=1)
            {
                printf("%d is a leap year \n", i );
            }

    }

return 0;
}
