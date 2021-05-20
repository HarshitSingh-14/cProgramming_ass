#include<stdio.h>


int mystrlen1(char*s){
    char *p = s;
    while (*p)     // ( *p++ )
        p++;
    return p-s;
}

int mystrlen2(char *s){
    char *p = s;
    while (*p++);   // (*p++  != '\0'   o/r   NULL)

    return p-s-1;
}

int mystrlen3(char*s){
    int count = 0;
    while (s[count])
        count++;
    return count;
}

void mystrcpy1(char*s, char*t){
    while(*s++ = *t++);         // mystrcpy
}

void mystrcpy2(char*s, char*t){
    while (*s = *t)
        s++, t++;
}

void mystrcpy3(char *s, char *t){
    int i=0;
    for ( ; t[i] != '\0'; i++){
        s[i] = t[i];
    }
    s[i] = '\0';
}

void mystrcpy4(char *s , char *t){
    int i=0 ;
    for (; t[i] ; i++){
        s[i] = t[i];
    }
    s[i]= '\0';
}

void mystrcpy5(char*s, char*t){
    int i = 0;
    do{
        s[i]=t[i];
        i++;
    }while (t[i-1]);
}

void mystrcat1(char*s, char*t){
    while (*s)
        s++;
    while(*s++ = *t++);
}

void mystrcat2(char*s, char*t){
    int i = 0;
    while (s[i])
        i++;
    for(int j=0; t[j]; i++, j++){
        s[i]= t[j];
    }
    s[i] = '\0';
}

int mystrcmp(char *s , char *t){
    while (*s == *t && *s)
        s++ , t++;
    return *s - *t;
}

int main(){
char s[200] = "Hello", t[200]= "World";

printf("%d\n", mystrlen1(s));
printf("%d\n", mystrlen2(s));
printf("%d\n", mystrlen3(s));

puts(s);

mystrcpy2(s,t);
puts(s);

mystrcat2(s,t);
puts(s);

printf("%d\n", mystrcmp("Hello", "Hello"));


return 0;}


