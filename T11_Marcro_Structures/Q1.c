#include<stdio.h>
#define lowerCase(ch) if(ch >='a' && ch<='z'){printf("Lower");}


int main(){
char ch = 'B';

lowerCase(ch)                // ...Replaces the line of macro here.....

else { printf("is not lower");}

return 0;
}
