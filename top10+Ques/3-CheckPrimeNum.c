// C program to check prime number ---- 2, 3, 5, 7, 11, 13, 17,19, 23 ...... prime numbers (divisible by 1 and itself)

#include<stdio.h>
#include<assert.h>>

int main () {
    int n, x, isPrime;
    printf("Enter a number to check that it is prime or not: ");
    scanf("%d", &n);
    assert(n>=2);
    x = n/2;
    for(int i = 2; i<=x; i++){
        isPrime = 1;
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1 || n == 2 || n == 3){
        printf("%d is a Prime number: ", n);
    } else if (isPrime == 0 || n ==1){
        printf("%d is not a Prime number: ", n);
    }
    return 0;
}