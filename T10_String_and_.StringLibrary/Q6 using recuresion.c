# include<stdio.h>




int reverse(char a[],char *p){
if (*p!=a[0]){
printf("%c", *(p-1));
return reverse( a,(p-1));
    }
else return 0;
}



int main(){
char a[]= {"shivam"};


char *p = a;
for(int i =0; a[i]!=0; i++){
   p++;}
reverse(a,p);
return 0;
}
