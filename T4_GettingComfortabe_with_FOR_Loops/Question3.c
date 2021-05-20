#include <stdio.h>

 int main() {
 int n = 2;

 printf("Line: %d, n = %d\n", __LINE__, n);
 for (
 printf("Line: %d, n = %d\n", __LINE__, n);
 printf("Line: %d, n = %d\n", __LINE__, n), n;  // n now intialised so loop starts
 printf("Line: %d, n = %d\n", __LINE__, n), n--
 ) {
 printf("Line: %d, n = %d\n", __LINE__, n);
 }
 printf("Line: %d, n = %d\n", __LINE__, n);

 return 0;
}
