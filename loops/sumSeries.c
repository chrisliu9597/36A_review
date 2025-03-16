#include <stdio.h>
// computes the sum of all integers up to n
int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; i++){
        sum += i;
    }
    printf("Sum of the series is %d\n", sum);
    return 0;
}