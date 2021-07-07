#include<stdio.h>
#include<conio.h>
int main(){
int year;
printf("\n Enter the year :- ");
scanf("%d",&year);
if(year%400==0)
printf(" \n The year is not leap year");
else if(year%4==0&& year%100!=0)
printf("\n The year is a leap year ");
return 0;
}
