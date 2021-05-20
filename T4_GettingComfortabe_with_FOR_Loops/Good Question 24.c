int main() {

    int i= 3;


            for (;i%4==0;){

                for (;i%100==0;){

                        for (;i%400==0;){
                            printf(" it leap year");
                            break;
                        }

                        for (;i%400!=0;){
                            printf(" Its  not a leap year ");
                            break;
                        }
                break;
                }


                 for (;i%100!=0;){
                    printf("Its a leap year ");
                break;
                }



            break;
            }






    for (;i%4!=0;){

        printf("It is not a leap year");
    break;}



  return 0;
}
