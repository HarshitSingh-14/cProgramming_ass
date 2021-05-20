#include<stdio.h>
#include<string.h>
int main(){
    char a[] = {"hEllo"};

    for(int i= 0; a[i]!='\0'; i++){    // can use s[i]
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] = a[i] - 32;
        }
    }

    printf("%s ",a );
return 0;}

