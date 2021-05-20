#include <stdio.h>
int main() {

char myChar = 'C';
unsigned char myUnsignedChar = 'A';
signed char mySignedChar = 'B';
int myInt = -1 * 'D';
unsigned int myUnsignedInt = 0x5E;
short myShort = -1 * 'E';
unsigned short myUnsignedShort = 010;
long myLong = -10000000;
unsigned long myUnsignedLong = 10000000000;
float myFloat = 0.325;
double myDouble = 1.5e-3;
long double myLongDouble = 3.2e30;

printf("%ld %ld \n", sizeof(myChar),  sizeof(typeof(myLong)));
printf("%ld %ld \n", sizeof(myUnsignedChar),  sizeof(myUnsignedChar));
printf("%ld %ld \n", sizeof(mySignedChar),  sizeof(mySignedChar));
printf("%ld %ld \n", sizeof(myInt),  sizeof(myInt));
printf("%ld %ld \n", sizeof(myUnsignedInt),  sizeof(myUnsignedInt));
printf("%ld %ld \n", sizeof(myUnsignedShort),  sizeof(myUnsignedShort));
printf("%ld %ld \n", sizeof(myLong),  sizeof(myLong));
printf("%ld %ld \n", sizeof(myUnsignedLong),  sizeof(myUnsignedLong));
printf("%ld %ld \n", sizeof(myFloat),  sizeof(myFloat));
printf("%ld %ld \n", sizeof(myDouble),  sizeof(myDouble));
printf("%ld %ld \n", sizeof(myLongDouble),  sizeof(myLongDouble));



return 0;
}
