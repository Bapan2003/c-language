#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
double d,s;
printf("\n Enter the value of side\n ");
scanf("%d",&a);
scanf(" %d",&b);
scanf(" %d",&c);
s = ((a+b+c)/2);
d= (s*(s-a)*(s-b)*(s-c));
printf("\n The Area of Triangle is %f",d);
return 0;
}
