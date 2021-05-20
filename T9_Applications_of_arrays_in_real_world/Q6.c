#include <stdio.h>
int main()
{
  int array[1000], search, a, n;

  printf("enter size of array\n");
  scanf("%d", &n);

        printf("enter %d element of array\n", n);

  for (a = 0; a < n; a++)
    scanf("%d", &array[a]);

  printf("To search??\n");
  scanf("%d", &search);

  for (a = 0; a < n; a++)
  {
    if (array[a] == search)
    {
      printf("%d is present \n", search, a+1);
      break;
    }
  }
  if (a == n)
    printf("%d is not", search);

  return 0;
}
