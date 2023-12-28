/*
Write a program to calculate sum of two integers
*/

#include <stdio.h>

int main() {
    int a,b,sum;

    printf("Enter two integers for sum:");
    scanf("%d %d", &a,&b);
    sum = a+b;
    printf("sum of %d and %d is %d",a,b,sum);

    return 0;
}

// OR 
#include <stdio.h>

int main() {
    int a,b;

    printf("Enter two integers for sum:");
    scanf("%d %d", &a,&b);
    printf("sum of %d and %d is %d",a,b,a+b);

    return 0;
}


