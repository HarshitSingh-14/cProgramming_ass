#include <stdio.h>
#include <math.h>

int main(){

char c='x';

if(
 (c>='A' && c<='Z')
 ||
(( c>='a') && c<='z') )

 {
     if ( c== 'a' || c=='e' || c=='i' || c=='o' || c=='u')            // REBEMBER ==
   {  printf("A small letter and a vowel");
      }   else if ((c>= 'A' && c<= 'Z') &&
             !(c=='A') || (c=='E') || (c=='I')|| (c=='O')|| (c=='U')){
             printf("a capital letter and a consonant.");
      } else {
           printf("a character in English but does not fall in the two categories ");

        }
       } else {
        printf(" Not a charcter in English (maybe a special character)");
       }





return 0;
}
