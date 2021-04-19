//                  6.C program to design calculator with basic operations using switch
//                                    ^^^^^^^ Calculator ^^^^^^^

#include<stdio.h> 

int main(void)
{       
    int a, b, result;
    char operator; 

  printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator); 

    printf("Enter an first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);
    
    switch(operator)
    {
        case '+':
        printf("%.d + %.d = %.d", a, b, a + b);
            break;
        case '-':
        printf("%.d - %.d = %.d", a, b, a - b);
            break;
        case '*':
         printf("%.d * %.d = %.d", a, b, a * b);
            break;
        case '/':
          printf("%.d / %.d = %.d", a, b, a / b);
            break;   
       default:
        printf("Error! Enter the correct operator ('+','-','*','/')  ");
    }

    return 0; 
}