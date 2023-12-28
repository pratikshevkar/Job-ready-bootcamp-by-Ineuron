#include<stdio.h>

void num(int n);
int main() {
    num(540);

return 0;
}

void num(int n) {
    if(n>0) {
        printf("%d ",n%10);
        num(n/10);
        
    }
    
}