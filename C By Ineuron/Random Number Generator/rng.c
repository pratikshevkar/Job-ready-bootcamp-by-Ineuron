#include<stdio.h>
int main() {
    int n,i;
    printf("Enter seed");
    scanf("%d",&n);
    for(i=1; i<10; i++) {
         n = printf("%d ",n+6);
    }

    return 0;
}