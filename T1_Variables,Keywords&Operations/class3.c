#include <stdio.h>

int main (){
int a = 0,b=1,c=2,r=10,s=0;
 r=a+b++ - -- c + r--;
 s= a+b ++ - --c + r--;
 printf("r= %d s= %d", r, s);

return 0;

}
