#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("\n Enter the  Value of a :-");
scanf("%d",&a);
printf("\n Enter the Value of b:- ");
scanf("%d",&b);
printf("\n Enter the Value of c:- ");
scanf("%d",&c);
if (a>b&&a>c)
printf("\n The Largest Number of three number %d",a);
if (b>c&&b>c)
printf("\n The Largest Number of three number %d",b);
if (c>a&&c>b)
printf("\n The Largest Number of three number %d",c);
return 0;
}
