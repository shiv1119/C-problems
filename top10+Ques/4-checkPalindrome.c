// When a given number is reversed and that number is equal to given number then it is said to be palindrome --
// 121 - 121(palindrome)
// 122 - 221(not palindrome)

#include<stdio.h>
#include<assert.h>

int main() {
    int rem, q, n, num = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    assert(n>=1);
    q = n;
    while(q != 0){
        rem = q%10;
        num = num * 10 + rem;
        q = q/10;
    }
    if(n<10){
        printf("%d is a Palindrome: ",n);
    } else if(num == n){
        printf("%d is a Palindrome: ", n);
    } else {
        printf("%d is not a Palindrome: ", n);
    }
    return 0;
}