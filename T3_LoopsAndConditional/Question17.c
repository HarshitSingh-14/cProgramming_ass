#include <stdio.h>
#include <math.h>

int main(){


int units = 230;

double total = 0.0;

int remaining = units;

total = remaining > 50.0 ? remaining * 2.5 : 50 * 2.5;
remaining -= 50;
total = remaining > 50.0 ? remaining * 2.5 : 50 * 2.5;
remaining -= 75;
total = remaining > 50.0 ? remaining * 2.5 : 50 * 2.5;
remaining -= 100;



return 0;
}
