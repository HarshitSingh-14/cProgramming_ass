 /* Use the following to compile:
 gcc -c my_library.c
 */
 #include "my_library.h"

 /* Can be accessed from anywhere */
 int global_1 = 1; // definition; this is good
 int global_2 = 2; // multiple-definition; undefined behavior
 int global_3 = 3; //

 /* Can be accessed from anywhere */
 extern void print_global() { //the keyword extern does not have any effect
 printf("\n*** File: %s, Function: %s, Line: %d ***\n",
 __FILE__, __func__, __LINE__
 );
 printf(
 "global_1 = %d, &global_1 = %p\n",
 global_1, &global_1
 );
 printf(
 "global_2 = %d, &global_2 = %p\n",
 global_2, &global_2
 );
 printf(
 "global_3 = %d, &global_3 = %p\n",
 global_3, &global_3
 );
 printf("\n*** File: %s, Function: %s, Line: %d ***\n",
 __FILE__, __func__, __LINE__
 );
 }

 /* Access restricted to this file only */
 static int static_global_1 = 4;
 static int static_global_2 = 5;

 /* Can be accessed from anywhere */
 void print_static_global() {
printf("\n*** File: %s, Function: %s, Line: %d ***\n",
 __FILE__, __func__, __LINE__
 );
 printf(
 "static_global_1 = %d, &static_global_1 = %p\n",
 static_global_1, &static_global_1
 );
 printf(
 "static_global_2 = %d, &static_global_2 = %p\n",
 static_global_2, &static_global_2
 );
 printf("\n*** File: %s, Function: %s, Line: %d ***\n",
 __FILE__, __func__, __LINE__
    );
 }

 /* Access restricted to this file only */
 static void sayHello() {
 printf("Hello\n");
 };
