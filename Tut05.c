//  5.Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies
//                                 ^^^^^^ Quadrant^^^^^^


#include <stdio.h>
void main()
{
	int x,y;

	printf("Input the values for X and Y coordinate : ");
	scanf("%d %d",&x,&y);

	if( x > 0 && y > 0)
	  printf("The coordinate point (%d,%d) lies in the First quandrant.\n",x,y);

	else if( x < 0 && y > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",x,y);

	else if( x < 0 && y < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",x,y);

	else if( x > 0 && y < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",x,y);
      
	else if( x == 0 && y == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",x,y);

}