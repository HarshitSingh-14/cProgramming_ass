int main() {

    int number = 12;
    int sum=0;
    int i=1;
    int factors= 1;



    printf("Factors are -->");
    for (i; i<= number ; i++)
        {

       if (number %i==0){
             factors= i;
             printf("%d , \n",factors);
             sum += i;   // Not important to print (Just command)
        }

    }

    if (sum == number ){
        printf("PERFECT Number ");
        }


        else printf(" Not A Perfect Number");

  return 0;
}
