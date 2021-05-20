#include<stdio.h>
#include<math.h>

double pow2(double x, unsigned int n){
    printf("pow2(%g, %d)\n", x, n);    // counts steps


   if (n==0){
        return 1.0;
    }
    if(n==1){
        return x ;
    }



    else
        return pow2(x, n/2)* pow2(x, n-n/2);

}



double pow3 (double x, unsigned int n ){
    printf("pow3(%g, %d)\n", x, n);
    if (n==0) return 1.0;               //To decrease step include variable in temp in same stack
    if (n==1) return x;
    double temp = pow3(x , n/2);
    if(n%2== 0) return temp*temp; // EVEN -->
    else return temp *temp * x;   //  OOD --> without writing else also works fiine...
}











int main (){
    double x= 2.0;
    unsigned int n = 7;
    printf("%g\n" , pow2(x, n));
    printf("%g\n" , pow3(x, n));


return 0 ; }
