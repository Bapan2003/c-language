#include<stdio.h>
#include<conio.h>
int main(){
char a;
printf(" \nEnter an alphabet  ");
scanf("%c",&a);
if(!isalpha(a))
printf("\n The programme is error due to non alpha");
else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
printf("\n This alphabet is a Vowel");
else
printf("\n The alphabet is a cosonent %c");
return 0;
}
