#include<stdio.h>

void squar();
int main() {
    squar();

return 0;
}

void squar() {

    int n, squar;
    printf("Enter a number:- ");
    scanf("%d",&n);

    squar= n*n;
    printf("%d",squar);
}