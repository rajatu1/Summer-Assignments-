#include <stdio.h>
int main() {

  int n,temp,count=0;
  
  printf("Enter the number = ");
  scanf("%d",&n);
  
  temp=n;

  if (n==0) {
    printf("You have entered 0 & number of digit is 1 !!");
  }

  else {
  while (n != 0) {
    n /= 10;
    count++;

  }

  printf("Number of digits in %d is %d",temp,count);
}
    return 0;
}