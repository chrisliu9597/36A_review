#include <stdio.h>
// computes factorial
int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i < n; i++){
        product *= i;
    }
    printf("%d! = %d\n", n, product);
    return 0;
}