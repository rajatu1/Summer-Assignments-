#include <stdio.h>
int main () { 

   int n,sum=0;
  
    printf("Enter the number upto which sum is to be printed= ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
    
        sum=sum+i;
    }

    printf("The sum upto %d is %d \n",n,sum);

return 0;
}