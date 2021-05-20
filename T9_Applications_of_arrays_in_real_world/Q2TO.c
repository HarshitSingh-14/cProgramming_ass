
#include <stdio.h>

int kadane(int a[], int n);

int maxCircularSum(int a[], int n)
{
    int max_kadane = kadane(a, n);

    int max_wrap = 0, i;
    for (i = 0; i < n; i++) {
        max_wrap += a[i];
        a[i] = -a[i];
    }

    max_wrap = max_wrap + kadane(a, n);

    return (max_wrap > max_kadane) ? max_wrap : max_kadane;
}

int kadane(int a[], int n)
{
    int max_so_far = 0, max_ending_here = 0;
    int i;
    for (i = 0; i < n; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    int a[] = { 12, 19, -20, 3, -2, -6, 7, -13, 10 };
    int n = sizeof(a) / sizeof(a[0]);
    printf("Maximum circular sum is %dn",
           maxCircularSum(a, n));
    return 0;
}
