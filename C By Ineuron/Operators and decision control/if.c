#include<stdio.h>
int main() {
    int a;
    printf("Enter Number:- ");
    scanf("%d",&a);
    if(a>0) {
        printf("Given number is postive");
    }
    if(a<=0) {
        printf("Given numbe is non postive");
    }
    return 0;
}