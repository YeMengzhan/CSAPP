#include <stdio.h>

void main()
{
	int x = 0x7FFFFF4C;
	int y =(int) (float) x;
	printf("x is %d \ny is %d \n",x,y);
}
