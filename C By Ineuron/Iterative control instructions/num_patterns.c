#include<stdio.h>
int main() {
    int j,i,k;
    for(i=1;i<=5;i++) {
        k='A';
         for(j=1;j<=5;j++) {
            if(j>i-1) {
                printf("%c",k);
                k++;
            } else {
                printf(" ");    
            }   
    }
    printf("\n");
    }
    return 0;
}