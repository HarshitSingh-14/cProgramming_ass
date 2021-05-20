#include<stdio.h>

int unique(int a[], int size){
    for(int i =0 ; i< size; i++){
        for (int j =i+1 ; j<size; j++ ){
                if(a[i]==a[j]){
                     a[j]=0;
                     break;
                  }

}
return 0;
}


int main(){

int a[8]={1,2,2,3,3,1,2,8};

unique(a , 8);

return 0;
}
