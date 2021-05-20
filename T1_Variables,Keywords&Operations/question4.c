#include <stdio.h>
int main() {

printf("The address of main() is %p.\n", main);
printf("The address of main() is %p.\n", &main);
printf("The address of printf() is %p.\n", printf);
printf("The address of printf() is %p.\n", &printf);

return 0;
}
