// fibinacco using recursion and iteration
#include <stdio.h>
int fib_recursive(int n){
    if(n <= 1) return n;
    return fib_recursive(n-1) + fib_recursive(n-2);
}
int fib_iterative(int n){
    if(n <= 1) return n;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
    int main(){
        int n;
        scanf("%d", &n);
        printf("Fibonacci (Recursive): %d\n", fib_recursive(n));
        printf("Fibonacci (Iterative): %d\n", fib_iterative(n));
        return 0;
}