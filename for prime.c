#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;

//printf("\n Enter a number:");
//scanf("%d",&n);
for(n=2;n<=100;n++)
{
for(i=2;i<=n-1;i++)
{
	if(n%i==0)
		{
	       //	printf("%d  ",n);
		break;
		}
}
if(n==i)
printf("%d  ",n);
}
getch();
}
