#include<stdio.h>
extern int b = 15;
int main() {
    //The variables declared as exten are not allocated any memory.
    //It intended to specify that the variable is declared elsewhere in the program.
    extern int a;
    //We can only intitalize the extern variable globally.
    // a= 5;

    //An external variable can be declared many times but can be initalized at only once.
    extern int a;
    extern int a;
    //we can not use extern and initializer at same time
    //extern int a=0;

    printf("%d", a);

    return 0;
 }
extern int a= 30;