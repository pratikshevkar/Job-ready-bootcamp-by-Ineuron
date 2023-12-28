/*TNRN*/
// #include<stdio.h>

// void add();
// int main() {
//     add();

//     return 0;
// }

// void add() {
//     int a,b;
//     printf("Enter two a number:- ");
//     scanf("%d%d",&a,&b);
//     printf("Sum is %d",a+b);
// }

/*TSRN*/
// #include<stdio.h>

// void add (int x, int y);
// int main() {
//     int a,b;
//     printf("Enter two number:- ");
//     scanf("%d%d",&a,&b);

//     add(a,b);

//     return 0;
// }

// void add(int x,int y) {
//     int c;
//     c=x+y;
//     printf("Sum is %d",c);
// }

/*TNRS*/

// #include<stdio.h>

// int add();
// int main() {
//     printf("Sum is %d",add());
//     return 0;
// }

// int add() {
//     int a,b,c;
//     printf("Enter two numbers:- ");
//     scanf("%d%d",&a,&b);
//     return (a+b);
// }

/*TSRS*/

#include<Stdio.h>

int add(int a,int b);
int main() {
    int a,b,p;
    printf("Enter two numbers:- ");
    scanf("%d%d",&a,&b);
    p = add(a,b);
    printf("Sum is %d",p);

    return 0;
}

int add (int a, int b) {
    int c;
    c=a+b;
    return c;
}