 #include <stdio.h>

 int main() {

 int n = 2;

 printf("Line: %d, n = %d\n", __LINE__, n);
 while(n, printf("Line: %d, n = %d\n", __LINE__, n)) { // n is intiated in loop
     // Whereas in question 1,  n is behind
 printf("Line: %d, n = %d\n", __LINE__, n--);

 }
 printf("Line: %d, n = %d\n", __LINE__, n);

 return 0;
 }
