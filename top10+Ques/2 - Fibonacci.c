//  Write a program to print n numbers fibonacci series using recursion .... (0 1 1 2 3 5 8 13 21 34 ............)

int fib(int n){
    if (n <= 1){
        return n;
    }else {
        return (fib(n-1) + fib(n-2));
    }
}

int main() {
    int n;
    printf("Enter number uppto which you want fibonacci series: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Please enter a positive term: ");
    } else {
        for(int i = 0; i<n; i++){
            printf("%d ", fib(i));
        }
    }
    return 0;
    
}