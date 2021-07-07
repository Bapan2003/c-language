#include<stdio.h>
#include<conio.h>
int main(){
int n, i=2,sum=0;
printf("\n Enter the valu of n: ");
scanf("%d",&n);
while(i<=n)
{
sum += i;
i+=2;
}
printf(" \n The sum of 2+4+6+.....+%d is %d",n,sum);
return 0;
}
