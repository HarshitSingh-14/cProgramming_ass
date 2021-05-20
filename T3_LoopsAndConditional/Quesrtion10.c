#include <stdio.h>
#include <math.h>

int main(){

char c= '4';
if (( c>='a' && c<='z') || (c>='A' && c<='Z')){
    printf("%c is an alphabet", c);
}
else if  ((c>='0' )&& (c<='9')) {printf("%c is a number", c);}

else {printf("%c It's nothing",c);}

return 0;
}

