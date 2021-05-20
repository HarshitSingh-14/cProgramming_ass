#include<stdio.h>


int main(){



char a[]={" This is an Example"};

char *p1= a;
int i=0;
while(a[i]){
    p1++;
    i++;
}
p1--;



char *p2=a;
i=0;
while(a[i]){
    p2++;
    i++;
}
p2--;

for(i=0;*(p2-i)!=' ';i++){
        p2--;
}
p2--;

char *p3 = p2;

for (i =0 ; *(p3+i)!='\0';i++){
    printf("%c", *(p3+i));
}

for(i=0;*(p2-i)!=' ';i++){
        p2--;
}
p2--;

printf(" ");

 p3 = p2;

for (i =0 ; *(p3+i)!=' ';i++){
    printf("%c", *(p3+i));

}

for(i=0;*(p2-i)!=' ';i++){
        p2--;
}
p2--;

printf(" ");

 p3 = p2;

for (i =0 ; *(p3+i)!=' ';i++){
    printf("%c", *(p3+i));
}

for(i=0;*(p2-i)!=' ';i++){
        p2--;
}
p2--;
p2--;
printf(" ");

 p3 = p2;

for (i =0 ; *(p3+i)!=' ';i++){
    printf("%c", *(p3+i));
}




return 0;}
