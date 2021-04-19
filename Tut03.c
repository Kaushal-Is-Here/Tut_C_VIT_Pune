//                                  3.Find the average of 5 Numbers                    
 //                                        Avg 5 Num
#include<stdio.h>
int main()
{
  float num1, num2, num3, num4, num5;
  float sum, avg;
  printf("Enter three Numbers: ");
  scanf("%f %f %f %f %f",&num1, &num2, &num3, &num4, &num5);

  sum = num1 + num2 + num3 + num4 + num5;

  avg = sum / 5;
  
  printf("Average=%.2f\n",avg );

  return 0;
}