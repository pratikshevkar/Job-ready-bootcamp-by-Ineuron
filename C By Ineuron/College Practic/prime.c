#include<stdio.h>
int main() {
    int n,i,flag=0;
    printf("Enter a number:- ");
    scanf("%d",&n);

    if(n==1) {
        printf("Given number is not prime nor composite");
    } else {
          for(i=2;i<(n-1);i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    if(flag==1) {
        printf("Not prime");
    } else {
        printf("Prime");
    }

    }

    return 0;
}