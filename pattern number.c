#include<stdio.h>
#include<conio.h>
int main(){
int i,j,a;
printf("\n enter the value of a :");
scanf("%d",&a);
for(i=1;i<=a;i++){
for(j=1;j<=i;j++)
printf("%d ",j);
printf("\n");
}
return 0;
}
