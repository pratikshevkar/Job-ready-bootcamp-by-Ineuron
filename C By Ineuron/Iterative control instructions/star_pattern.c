#include<stdio.h>
int main() {
    int j,i,l;
    printf("Enter a number:- ");
    scanf("%d",&l);
    for(i=1;i<=l;i++) {
         for(j=1;j<=l;j++) {
            if(j>i-1) {
                printf("*");
            } else {
                printf(" ");    
            }   
    }
    printf("\n");
    }
    return 0;
}