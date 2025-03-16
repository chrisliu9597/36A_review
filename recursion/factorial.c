#include <stdio.h>


// compute the factorial of a number using recursion
int factorial(unsigned int n){
    if (n == 0){
        return 1;
    }
    else return n * factorial(n - 1);
}

int main(){
    int n;
    if (scanf("%d", &n) != 1 || n < 0){
        printf("invalid format\n");
        return 1;
    } // error checking
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}