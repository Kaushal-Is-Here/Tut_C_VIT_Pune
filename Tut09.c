//                           9. Generate the Fibonacci series of elements
//                                 ^^^^^ Fibonacci series  ^^^^^

#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: \n");

    for (i = 1; i <= n; ++i) {
        printf("%d, \n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}