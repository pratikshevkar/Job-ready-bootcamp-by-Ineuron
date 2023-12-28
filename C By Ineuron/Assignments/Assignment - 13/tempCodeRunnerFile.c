#include<stdio.h>
int num(int n);
int main() {
    int p;
    p=num(9);
        printf("%d",p);

return 0;
}

int num(int n) {
    int sum;
    if(n==1) {
       return 1;
    } else {
         sum = n*2 -1 + num(n-1);
        return sum;
    }
}
