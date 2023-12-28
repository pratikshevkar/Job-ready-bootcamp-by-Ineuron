// factorial

// #include<stdio.h>

// int fact (int n);
// int main() {
//     printf("factorial of 5 is %d",fact(5));
// }

// int fact(int n) {
//     if(n== 0 || n==1)
//     return 1;
//     return n * fact(n-1);
// }

//print natural no.

#include<stdio.h>
void num(int n);
int main() {

num(10);

return 0;
}

void num(int n) {
    if(n>0) {
        num(n-1);
        printf("%d ",n);
    }
}