#include <stdio.h>
#include<conio.h>
void main 
{
	int x,y,z;
  clrscr();
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	{
		printf("%d",x);
	}
	else if(y>x&&y>z)
	{
		printf("%d",y);
	}
	else
	{
		printf("%d",z);
	}
	return 0;
}
