#include <stdio.h>

// efficient recursive fibonacci program (only one recursive call)

int fib_h(int n, int s1, int s2){
    if (n <= 2){
        return s1 + s2;
    }
    return fib_h(n-1, s2, s1+s2);
}

int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    else 
        return fib_h(n, 0, 1);
}

int main(){
    int n;
    if (scanf("%d", &n) != 1){ // error checking
        printf("Error\n");
        return 1;
    }
    printf("Fib(%d) = %d\n", n, fib(n));
    return 0;
}

// Sequence: {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,...}