#include <stdio.h>
#include <math.h>

int main(){


 int n= 324
;

 if (n%7==0 ||n%13==0){


  if (n%13==0 && n%7!=0 ) {printf("Divisible by 13");}

  else if (n%7==0 && n%13!=0) {printf("Divisible by 7");}

  else {printf("Divisible by both 7 and 13");}

 }

  else {printf("Not divisible by ANY");
  }


return 0;
}
