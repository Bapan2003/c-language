#include<stdio.h>
#include<conio.h>
int main(){
int row,col;
printf("Enter the row and collumn \n");
scanf("%d%d",&row,&col);
int a[row][col],b[row][col],c[row][col];
printf("\nThe a matrix is \n");
for(int i=0;i<row;i++){
    for(int j =0;j<col;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("\nThe b matrix is\n ");
for(int i=0;i<row;i++){
    for(int j =0;j<col;j++){
        scanf("%d",&b[i][j]);
    }

}
for(int i =0;i<row;i++) {
		for(int j=0;j<col;j++) {
			c[i][j]= a[i][j]+b[i][j];
		}
	}
	printf("\nThe sum of a&b is:-\n");
	for(int i =0;i<row;i++) {
		for(int j=0;j<col;j++) {
		printf("%d  ",c[i][j]);
		}
		printf("\n");
		}


}
