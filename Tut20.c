// 20.Exchange a string from one variable to another using pointers

#include <stdio.h>
#include <conio.h>
void swap(int *,int *);
void main()
{
	int a=10,b=20;
	clrscr();
	printf("\nVALUES OF a AND b BEFORE SWAPING ARE %d %d",a,b);
	swap(&a,&b);
	printf("\nVALUES OF a AND b AFTER SWAPING ARE %d %d",a,b);
	getch();
}
void swap(x,y)
int *x,*y;
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}