#include<stdio.h>
#include<conio.h>
int main(){
int n;
 printf("\n Enter the element number : ");
 scanf("%d",&n);
  int a[n];
  int i =0;
  printf("\n Enter the %d number \n",n);
  while(i<n){
  scanf("%d",&a[i]);
  i++;
  }
  printf("\n the sum is %d",sum(a,n));
  return 0;
  }
  int sum(int arr[],int size){
  int i =0,sum=0;
  while(i<size){
  sum += arr[i];
  i++;
  }
  return sum;
  }
