#include <stdio.h>
#include <math.h>

int main(){

char c= '.';

if (( c>='a' && c<='z') || (c>='A' && c<='Z')){
    printf("%c is alphabet", c);
}
else  {printf("%c is not an alphabet", c);}

return 0;
}

