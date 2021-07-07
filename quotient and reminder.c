#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,quotient,reminder;
 printf("\n Enter The Value of a :- ");
scanf("%d",&a);
printf("\n Enter The Value of b :- ");
scanf("%d",&b);
quotient = a/b;
reminder = a%b;
printf("\n The Value of Quotient :- %d",quotient);
printf("\n The Value of Reminder :- %d",reminder);
return 0;
}
