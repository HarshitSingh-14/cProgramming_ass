#include <stdio.h>
#include <math.h>

int main(){

char c= 'b';

if (( c>='a' && c<='z') || (c>='A' && c<='Z')){
    if ( c>='a' && c<='z') {printf("%c is lower case ", c);}
else {printf("%c is Upper case ", c);}
}
else  {printf("%c is not an alphabet", c);}

return 0;
}


