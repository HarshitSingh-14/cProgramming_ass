#include<stdio.h>
#include<math.h>

int main (){
float sum = 0.0;
float x =1.0 ;

for (float i = 1; i < 10000 ; i++ ){

sum = sum - (pow (-x, i)) / i ;

}

printf("%g", sum );
return 0;
}




