/*
1. Write a program to print MySirG N times on the screen.
*/

// #include<stdio.h>
// int main() {
//     int a=0,b;
//     printf("Enter number:- ");
//     scanf("%d",&b);
//     while(a<b) {
//         printf("MySirG\n");
//         a++;
//     }
//     return 0;
// }

/*
2. Write a program to print the first N natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int i,b;
//     printf("Enter number:- ");
//     scanf("%d",&b);
//     for(i=1;i<=b;i++) {
//         printf("%d\n",i);
//     }

//     return 0;
// }

/*
3. Write a program to print the first N natural numbers in reverse order
*/

// #include<stdio.h>
// int main() {
//     int i;
//     printf("Enter number:- ");
//     scanf("%d",&i);
//     do
//     {
//          printf("%d\n",i);
//          --i;
//     } while (i>=1);

//     return 0;
// }

/*
4. Write a program to print the first N odd natural numbers
*/

// #include<stdio.h>
// int main() {
//     int i,p=2,q;
//     printf("Enter number:- ");
//     scanf("%d",&q);
//     for (i=1;i<=(q*2);i=i+p) {
//         printf("%d\n",i);
//     }

//     return 0;
// }

/*
5. Write a program to print the first N odd natural numbers in reverse order.
*/

// #include<stdio.h>
// int main() {
//     int i,p=2,r;
//     printf("Enter number:- ");
//     scanf("%d",&r);
//     r=r+4;
//     for (i=r;i>=0;i=i-p) {
//         printf("%d\n",i);
//     }

//     return 0;
// }

/*
6. Write a program to print the first N even natural numbers
*/

// #include<stdio.h>
// int main() {
//     int i,p=2,x;
//     printf("Enter number:- ");
//     scanf("%d",&x);
//     x=x+6;
//     for(i=2;i<=x;i=i+p) {
//         printf("%d\n",i);
//     }

//     return 0;
// }

/*
7. Write a program to print the first N even natural numbers in reverse order
*/

#include<stdio.h>
int main() {
    int i,p=2,a;
    printf("Enter number:- ");
    scanf("%d",&a);
    a=a*2;
    for(i=a;i>0;i=i-p) {
        printf("%d\n",i);
    }

    return 0;
}

/*
8. Write a program to print squares of the first N natural numbers
*/

// #include<stdio.h>
// int main() {
//     int i,p,c;
//     printf("Enter number:- ");
//     scanf("%d",&c);
//     for(i=1;i<=c;i++) {
//         p=i*i;
//         printf("%d\n",p);
//     }

//     return 0;
// }

/*
9. Write a program to print cubes of the first N natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int i,p,a;
//     printf("Enter number:- ");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++) {
//         p=i*i*i;
//         printf("%d\n",p);
//     }

//     return 0;
// }

/*
10. Write a program to print a table of N.
*/

// #include<stdio.h>
// int main() {
//     int i,p,q;
//     printf("Enter table:- ");
//     scanf("%d",&q);
//     for(i=1;i<=10;i++) {
//         p=q*i;
//         printf("%d\n",p);
//     }

//     return 0;
// }

                            /*Sir ans*/
// #include<stdio.h>
// int main() {
//     int i,n;
//     printf("Enter value of n");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++) {
//         printf("%d * %d = %d\n",n,i,n*i);
//     }

//     return 0;
// }                                   

/*
11. WAP to calculate sum of N natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int a,i,sum;
//     printf("Enter number:- ");
//     scanf("%d",&a);
//     for(i=1,sum=0;i<=a;i++) {
//         sum=sum+i;
//     }
//     printf("%d\n",sum);

//     return 0;
// }
