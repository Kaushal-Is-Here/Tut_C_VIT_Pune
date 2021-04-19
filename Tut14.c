#include <stdio.h>
int main() {
    int num, enternum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    enternum = num;

    while (enternum != 0) {

        remainder = enternum % 10;
        
       result += remainder * remainder * remainder;
       
       enternum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}