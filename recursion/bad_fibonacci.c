#include <stdio.h>
 // This would take a very long time, as you would have to branch out a lot
int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    else 
        return fib(n-1) + fib(n-2); // making multiple recursive calls slows stuff down a lot
}

int main(){
    int n;
    if (scanf("%d", &n) != 1){
        printf("Error\n");
        return 1;
    }
    printf("Fib(%d) = %d\n", n, fib(n));
    return 0;
}

// Sequence: {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,...}