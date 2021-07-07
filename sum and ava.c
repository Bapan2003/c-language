#include<stdio.h>
#include<conio.h>
int main(){
int i,n,sum=0;
float ava;
printf("\n enter the numbers : ");
 scanf("%d",&n);
 for(int i =n;i<=n+10;i++){
 sum += i;
 }
 ava = sum/10.0;
 printf("\n the sum of 10 numbers %d",sum);
 printf("\n The avarage of 10 number %f",ava);
 return 0;
 }
