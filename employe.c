#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employe
{
	int id,salary;//4B
	double marks;//8B
	char experiance[20];//19B
	char name[20];
}e;


int main()
{
	struct employe e1,e2,e3;
	printf("\nFor 1st employe:-\n");
	printf("\nEnter the name\n");
	gets(e1.name);
	strcpy(e1.name,e1.name);
	printf("\nEnter the id \n");
	scanf("%d",&e1.id);
	printf("\nEnter the salary \n");
	scanf("%d",&e1.salary);
	getchar();
	printf("\nEnter the experiance\n");
	gets(e1.experiance);
    strcpy(e1.experiance,e1.experiance);




    printf("\nFor 2nd employe:-\n");
	printf("\nEnter the name\n");
	gets(e2.name);
	strcpy(e2.name,e2.name);
	printf("\nEnter the id \n");
	scanf("%d",&e2.id);
	printf("\nEnter the salary \n");
	scanf("%d",&e2.salary);
	getchar();
	printf("\nEnter the experiance\n");
	gets(e2.experiance);
	strcpy(e2.experiance,e2.experiance);





	printf("\nFor 3rd employe:-\n");
	printf("\nEnter the name\n");
	gets(e3.name);
	strcpy(e3.name,e3.name);
	printf("\nEnter the id \n");
	scanf("%d",&e3.id);
	printf("\nEnter the salary \n");
	scanf("%d",&e3.salary);
	getchar();
	printf("\nEnter the experiance\n");
	gets(e3.experiance);
	strcpy(e3.experiance,e3.experiance);


	e1.name;
	e1.id;
	e1.salary;
	e1.experiance;


	e2.name;
	e2.id;
	e2.salary;
	e2.experiance;


	e3.name;
	e3.id;
	e3.salary;
	e3.experiance;


	printf("\n%s's id,salary,experiance is respectively %d,%d,%s ",e1.name,e1.id,e1.salary,e1.experiance);
    printf("\n\n%s's id,salary,experiance is respectively %d,%d,%s ",e2.name,e2.id,e1.salary,e2.experiance);
    printf("\n\n%s's id,salary,experiance is respectively %d,%d,%s ",e3.name,e3.id,e3.salary,e3.experiance);




    printf("\n\n\n\n");
}
