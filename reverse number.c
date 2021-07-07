#include<stdio.h>
#include<conio.h>
int main(){
 int a,reverse=0;
 printf("\n Enter the number ");
 scanf("%d",&a);
 while(a>0){
  int lastDigit = a%10;
  reverse = reverse*10 + lastDigit;
  a /=10;
  }
  printf("\n The reverse number is %d",reverse);
  }
