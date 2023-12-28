/*
1. Write a recursive function to calculate sum of first N natural numbers
*/

// #include<stdio.h>
// int num(int n);
// int main() {
//     int p;
//     p=num(3);
//         printf("%d",p);

// return 0;
// }

// int num(int n) {
//     int sum=0;
//     if(n==1) {
//        return 1;
//     }
//     sum = n + num(n-1);
//     return sum;
// }

/*
2. Write a recursive function to calculate sum of first N odd natural numbers
sir RC:- 2*n+n-1 
*/

// #include<stdio.h>
// int num(int n);
// int main() {
//     int p;
//     p=num(3);
//         printf("%d",p);

// return 0;
// }

// int num(int n) {
//     int sum;
//     if(n==1) {
//        return 1;
//     } else {
//          sum = n*2 -1 + num(n-1);
//         return sum;
//     }
// }

/*
4. Write a recursive function to calculate sum of squares of first n natural numbers
NOTE: rc taken from sir
*/


// #include<stdio.h>

// int num(int n);
// int main() {
//     int p;
//     p=num(5);
//         printf("%d",p);

// return 0;
// }

// int num(int n) {
//     int sum=1;
//     if(n==1) {
//        return 1;
//     }
//     sum = n*n+ num(n-1);
//     return sum;
// }

/*
5. Write a recursive function to calculate sum of digits of a given number
*/

// #include<stdio.h>

// int num(int n);
// int main()
// {
//     int s;
//     s = num(4224);
//     printf("%d", s);

//     return 0;
// }

// int num(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     } else {
//           int sum;
//     sum = n % 10 + num(n/10);
//     return sum;
//     }
  
// }

/*
6. Write a recursive function to calculate factorial of a given number
*/

// #include<stdio.h>

// int num(int n);
// int main() {
//     int p;
//     p=num(9);
//         printf("%d",p);

// return 0;
// }

// int num(int n) {
//     int fact=0;
//     if(n==1) {
//        return n;
//     }
//     fact = n * num(n-1);
//     return fact;
// }

/*
7. Write a recursive function to calculate HCF of two numbers
ans by sir
*/

// #include<stdio.h>
// int hcf(int a, int b);
// int main() {
//     int a=492, b=248, result;

//     result = hcf(b,a%b);
//     printf("%d",result);

//     return 0;
// }
// int hcf(int a, int b) {
//     if(b==0) {
//         return a;
//     }
//     hcf(b,a%b);

// }

/*
8. Write a recursive function to print first N terms of Fibonacci series
ans by sir
*/

// #include<stdio.h>
// int fib(int n);
// int main() {
//     int n=5,i;
//     for(i=0; i<5; i++) {
//         printf("%d",fib(i));
//     }

//     return 0;
// }

// int fib(int n) {
//     if(n==0 || n ==1) {
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }


/* 
9. Write a program in C to count the digits of a given number using recursion.
*/

// #include<stdio.h>
// int num(int n);
// int main() {
//     int ans;
//     ans=num(249);
//         printf("%d",ans);

// return 0;
// }

// int num(int n) {
//     int p=0,sum;
//     if(n==0) {
//        return 0;
//     }
//     sum = (p+1) + num(n/10);
//     return sum;
// }



/*
10. Write a program in C to calculate the power of any number using recursion. 
*/

 