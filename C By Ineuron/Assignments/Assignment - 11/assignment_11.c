/*
1. Write a function to calculate LCM of two numbers. (TSRS) 
*/

// #include<stdio.h>

// int lcm(int a, int b);
// int main() {
//     int n1,n2,ans;
//     printf("Enter the two numbers:- ");
//     scanf("%d %d",&n1,&n2);
//     ans = lcm(n1,n2);
//     printf("LCM is %d",ans);

// return 0;
// }

// int lcm(int a, int b) {
//     int i;
//     for(i=1;i<=a*b;i++) {

//         if(i%a==0 && i%b==0) {
//             break;
//         }
//     }

//     return i;
// }

/*
2. Write a function to calculate HCF of two numbers. (TSRS) 
*/

// #include<stdio.h>

// int hcf(int a, int b);
// int main() {
//     int n1,n2,ans;
//     printf("Enter the two numbers:- ");
//     scanf("%d %d",&n1,&n2);
//     ans = hcf(n1,n2);
//     printf("HCF is %d",ans);

// return 0;
// }

// int hcf(int a, int b) {
//     int i,h;

//      for(i=1;i<=a*b;i++) {

//         if(i%a==0 && i%b==0) {
//             break;
//         }
//     }
//     h=a*b/i;
//     return h;

// }

/*
3. Write a function to check whether a given number is Prime or not. (TSRS) 
*/

// #include <stdio.h>

// int prime(int n);
// int main()
// {
//     int n, ans;
//     printf("Enter a number:- ");
//     scanf("%d", &n);
//     ans = prime(n);
//     if (ans == 1)
//     {
//         printf("Prime", ans);
//     }
//     else
//     {
//         printf("Not Prime", ans);
//     }

//     return 0;
// }

// int prime(int n)
// {

//     int i;
//     if (n == 2)
//     {
//         return 1;
//     }
//     else if (n == 1)
//     {
//         return 0;
//     }
//     else
//     {
//         for (i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 return 0;
//             }
//         }
//         if (i == n)
//         {
//             return 1;
//         }
//     }
// }

/*
4. Write a function to find the next prime number of a given number. (TSRS)
*/

// #include <stdio.h>

// int prime(int n);
// int main()
// {
//     int in1, ans;
//     printf("Enter a number:- ");
//     scanf("%d", &in1);
//     ans = prime(in1);
//     printf("nxt no is %d",ans);

//     return 0;
// }

// int prime(int in1)
// {
//     int i,p,c=0,in2;
//     in2=in1+1;

//     for(i=in1+1; i<=in2; i++) {

//         for(p=1; p<=in2; p++) {
//             if(i%p==0) {
//                 c++;
//             }
//         }
//         if(c==2) {
//             return i;   
//         }
//         c=0;
//         in2++;

//     }

// }

/*
5. Write a function to print first N prime numbers (TSRN)
*/
// #include<stdio.h>

// void primen(int n);
// int main() {
//     int n,ans;
//     printf("Enter no:- ");
//     scanf("%d",&n);
//     primen(n);

//     return 0;
// }

// void primen(int n1) {
//     int i,p,c=0;
//      for(i=2; i<=n1; i++) {

//         for(p=1; p<=n1; p++) {
//             if(i%p==0) {
//                 c++; }
//         }
//         if(c==2) {
//             printf("%d ", i);
//         }
//         c=0;
// }
// }

/*
6. Write a function to print all Prime numbers between two given numbers. (TSRN) 
*/

// #include<stdio.h>

// void primeb(int in1, int in2);
// int main() {
//     int in1,in2;

//     printf("Give two numbers:- ");
//     scanf("%d %d",&in1,&in2);
//     primeb(in1,in2);

// return 0;
// }

// void primeb(int in1, int in2) {
//     int i,p,c=0;
//     for(i=in1; i<=in2; i++) {

//         for(p=1; p<=in2; p++) {
//             if(i%p==0) {
//                 c++;
//             }
//         }
//         if(c==2) {
//             printf("%d ", i);
//         }
//         c=0;

//     }

// }

/*
7. Write a function to print first N terms of Fibonacci series (TSRN)
*/

// #include<stdio.h>

// void fibonacci(int n);
// int main() {
//     int n;
//     printf("Enter number:- ");
//     scanf("%d",&n);
//     fibonacci(n);

//     return 0;
// }

// void fibonacci(int n) {
//     int i,f1=0,f2=1,sum;
//     if (n==1) {
//         printf("%d\n",f1);
//     }
//     else if (n==2) {
//         printf("%d\n%d\n",f1,f2);
//     } else {
//         printf("%d\n%d\n",f1,f2);
//         for(i=0; i<(n-2); i++) {
//         sum=f1+f2;
//         f1=f2;
//         f2=sum;
//         printf("%d\n",sum);
//     }

//     }

// }

/*
8. Write a function to print PASCAL Triangle. (TSRN) (ans by sir)
*/

// int fact(int n);
// int comb(int n, int r);
// int pascal(int n);
// #include<stdio.h> 
// int main() {
//     int n,ans;
//     printf("Enter value of n:- ");
//     scanf("%d",&n);
//     ans = pascal(n);
//     printf("Pascal triangle is is %d",ans);
// }

// int pascal(int n) {
//     int i,j;
//     for(i=0;i<=n;i++) {
//         for ( j = 0; j <= i; j++)
//         {
//             printf("%d ",comb(i,j));
//         }
//         printf("\n");
        
//     }
// }

// int comb(int n, int r) {
//     int c;
//     c=fact(n)/(fact(r)*fact(n-r));
//     return c;
// }

// int fact(int n) {
//     long f=1,i;
//     for ( i = 1; i <=n; i++)
//     {
//         f=f*i;
//     }
//     return f;
// }


/*
9. Write a program in C to find the square of any number using the function.
*/

#include<stdio.h>

void squar();
int main() {
    squar();

return 0;
}

void squar() {

    int n, squar;
    printf("Enter a number:- ");
    scanf("%d",&n);

    squar= n*n;
    printf("%d",squar);
}

/*
10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
function.
*/

// int fact(int n);

// #include<stdio.h> 
// int main() {
//     int n,r,sum=0, ans,i;
//     printf("Enter number:- ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++) {
//     sum = sum+fact(i)/i;
//     } 
//     printf("%d ",sum);
// }

// int fact(int n) {
//     long f=1,i;
//     for ( i = 1; i <=n; i++)
//     {
//         f=f*i;
//     }
//     return f;
// }
