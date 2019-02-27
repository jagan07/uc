#include <stdio.h>
#include<conio.h>
void main 
{
	int x,y,z;
  clrscr();
  printf("enter the character");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	{
		printf("%d is the largest",x);
	}
	else if(y>x&&y>z)
	{
		printf("%d is the largest",y);
	}
	else
	{
		printf("%d is the largest",z);
	}
	getch();
}
