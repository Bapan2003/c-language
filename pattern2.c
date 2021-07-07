#include<stdio.h>
#include<conio.h>
int main(){
int n,b,i,j=1;
printf("\n enter the value of a");
scanf("%d",&n);
 for( i=1;i<=n;i++) {
    	for(j=1; j<=n-i;j++) {
    		printf("  ");
    			}

    	for ( j=1;j<=i;j++) {
    		printf("%d ",b++);
    		}
    		printf("\n");
    		}
    		return 0;
    		}
