#include<stdio.h>

int main(){
int x=2,y ;
char ch ='z';
float f=36.4 ;


printf("Hello\n");


printf("%dXXX%d , x" , x ,"\n");
printf("%d %d \n , printf , main\n");

printf("%d %d \n" , sizeof(ch), sizeof(f));  //Same number of d

//double u= 1.3 , b=32.3, n=32.3;
//double v= u+f/t;

//
//char
//unsigned char 0 to 225
//signed char -128 to 127
//int 16 bits or 32 bits
//signed int
//unsigned int
//short int 16 bits
//unsigned short int
//signed short int
//long int 32bits
//long long int 64bits
//signed long int
//unsigned long int
//unsigned long long int
//float 32bits
//double  64bits
//long double 80bits

printf (" %d \n" , sizeof (signed long int ) );   //CHECK

printf("%c %f \n",ch,f);


char  c1= 'a', c2 = 'b' , c3= 'z';
printf ("%c =%d\n %c =%d\n %c =%d \n" , c1, c1, c2,c2,c3,c3);




unsigned char c= -18;
signed char d = -18;

printf("%d = %c  \n %d= %c " , c,c,d,d);


return 0;
}
