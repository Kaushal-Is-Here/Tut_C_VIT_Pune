//                         2.Swapping of two no.without using third variable & using third variable
//                                           ^^^^ swap two variables ^^^^
                     
					     
#include <stdio.h> 

int main() 
{ 
	int x, y; 
	printf("Enter Value of x to swap : "); 
	scanf("%d", &x); 

	printf("\nEnter Value of y to swap : "); 
	scanf("%d", &y); 

	int temp = x; 
	x = y; 
	y = temp; 

	printf("\nAfter Swapping: x = %d", x); 
    printf("\nAfter Swapping: y = %d", y); 
	
	return 0; 
} 
