// Write a c program to find factorial of a number without recursion .... 
// Factorial of a number is number multiplied it by all number smaller than it --- 5! = 5*4*3*2*1 = 120

#include<stdio.h>
#include<assert.h>

int main(){
    int n,q,fact = 1;
    printf("Enter a number to get factorial: ");
    scanf("%d", &n);
    assert(n>0);
    q = n;
    while(q !=0){
        fact = fact * q;
        q = q -1;
    }

    printf("The factorial of %d is %d", n, fact);
    return 0;
}
