//                      3.Write a C program to check whether a given number is even or
//                                     ***** Odd Even *****

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer : ");
    scanf("%d", &num);

    
    if(num % 2 == 0)
        printf("%d is even integer.", num);
    else
        printf("%d is odd integer.", num);
    
    return 0;
}