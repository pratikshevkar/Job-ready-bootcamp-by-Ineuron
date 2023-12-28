#include<stdio.h>
int main() {
    int n,i;
    printf("Enter a number:- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        n=n/10;
        if(n==0)
        break;
    }
    printf("%d",i);

    return 0;
}