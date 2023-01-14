// Write a c program to find factorial of a number without recursion .... 
// Factorial of a number is number multiplied it by all number smaller than it --- 5! = 5*4*3*2*1 = 120

#include<stdio.h>
#include<assert.h>

int factorial(int n){
    if(n == 1){
        return 1;
    } else {
        return (n * factorial(n-1));
    }
}

int main(){
    int n;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
    assert("n>0");
    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}