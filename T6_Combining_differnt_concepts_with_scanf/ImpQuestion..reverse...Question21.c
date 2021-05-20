#include<stdio.h>
int a,r=0;
int reverse(a, r){
if (a == 0) return r;
else {
        return reverse(a/10 , r * 10 + a%10);
}



}


int main(){

printf("%d", reverse(465653,0));

return 0;
}
