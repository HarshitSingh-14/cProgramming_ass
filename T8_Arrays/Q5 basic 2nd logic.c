#include<stdio.h>

int duplicate(int a[], int size){
    int count = 0;
 for(int i=0; i<size; i++)
    {
         if(a[i]!=-1)
		{
		    for(int j=i+1; j<size; j++)

            {
        	   if(a[i]==a[j])
        	    {
			       count++;
			       a[j]=-1;
		       }
	       }
 		}



    }
return count;
}


int main(){

int a[7]={1,2,2,3,3,1,2,8};

printf(" Number of duplicate no's are %d",duplicate(a , 8));

return 0;
}
