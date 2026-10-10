#include<stdio.h>

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else
        return n* factorial(n-1);
}

int main(){
    int n, result;
    printf("enter a number:");
    scanf("%d",&n);

    if(n<0){
        printf("Error: Factorial of a negative number doesn't exist.");
    }
    else
        result = factorial(n);
        printf("factoreal of %d is %d ",n,result);
    return 0;
}