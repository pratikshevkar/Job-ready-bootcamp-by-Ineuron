#include<stdio.h>
int main() {
    int n,x,i,ans=0,p=1;
    printf("Enter a number:- ");
    scanf("%d",&n);

    printf("Enter a value of x:- ");
    scanf("%d",&x);

    for(i=1;i<=n;i++) {
        ans=(p*x)+ans;
    }
    printf("answer is %d",ans);

    return 0;
}