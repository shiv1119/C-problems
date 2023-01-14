//  Write a program to print n numbers fibonacci series without using recursion .... (0 1 1 2 3 5 8 13 21 34 ............)

#include<stdio.h>

int main(){
    int a1 = 0, a2 = 1, n, fib = 0;
    printf("Enter number uppto which you want fibonacci series: ");
    scanf("%d", &n);
    printf("%d %d ", a1, a2); //Default condition
    for(int i = 0; i<= n-3; i++){
        fib = a1 + a2;
        printf("%d ", fib);
        a1 = a2;
        a2 = fib;
    }
    return 0;
}

//Input - 10
//out put - 0 1 1 2 3 5 8 13 21 34