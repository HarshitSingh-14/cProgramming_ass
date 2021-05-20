 #include <stdio.h>

 extern int global_1; // declaration; cannot initialize

 void print_static_global();
 extern void print_global(); // extern does not have any effect

 /* If included, the following will cause error */
 //void sayHello();

 void sayHi(); // This is never defined


