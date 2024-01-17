#include<stdio.h>
int main() {
    int *p;
    register int a;
    printf("%d",a);

    //we can not use &operator for the register variable.
    p = &a;
    printf("%u ",&a);

    // we can not use more than one storage specifier for the same variable.
    // register static int b;

    return 0;

}