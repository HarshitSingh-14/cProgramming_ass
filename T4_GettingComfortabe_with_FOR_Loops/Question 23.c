int main() {

   int n= 31;

   int flag = 1;

    while (flag && (n%2==0))    {

        printf("Divisible by 2 \n");

        flag=0;    // INSTED of flag --> USE break;
    }              // To stop  repeatition.....

  return 0;
}
