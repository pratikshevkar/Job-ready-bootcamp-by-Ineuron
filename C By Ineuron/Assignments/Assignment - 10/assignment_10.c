/*
1. Write a function to calculate the area of a circle. (TSRS)
*/

// #include<stdio.h>

// double area (double p);
// int main() {
//     int a;
//     double f;
//     printf("Enter a radius:- ");
//     scanf("%d",&a);
//     f= area(a);
//     printf("area of circle is %.2f",f);

//     return 0;
// }

// double area (double p) {
//     double area,pi= 3.14159265359;
//     area = pi*p*p;
//     return area;
// }

/*
2. Write a function to calculate simple interest. (TSRS)
*/

// #include<stdio.h>

// int simple(int t,int p,int r);
// int main() {
//     int t,p,r,intr;
//     printf("Enter time, principal amount, rate of interest:- ");
//     scanf("%d%d%d",&t,&p,&r);
//     intr = simple(t,p,r);
//     printf("simple interest is %d",intr);

// return 0;
// }

// int simple(int t,int p, int r) {
//     int simple;
//     simple=(p*r*t)/100;
//     return simple;
// }







/*
3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
*/

// #include<stdio.h>

// int oddeven(int n);
// int main() {
//     int n,ans;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     ans=oddeven(n);

//     if(ans==1) {
//         printf("even");

//     } else {
//         printf("odd");
//     }

// return 0;
// }

// int oddeven(int n) {
//     if(n%2==0) {
//         return 1;
//     } else {
//         return 0;
//     }

// }



/*
4. Write a function to print first N natural numbers (TSRN)
*/

// #include<stdio.h>

// void natural(int n);
// int main() {
//     int n;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     natural(n);
// return 0;
// }

// void natural(int n) {
//     int i;
//     for(i=1;i<=n;i++) {
//         printf("%d\n",i);
//     }

// }







/*
5. Write a function to print first N odd natural numbers. (TSRN)
*/

// #include<stdio.h>
// void oddn(int n);
// int main() {
//     int n;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     oddn(n);

// return 0;
// }

// void oddn(int n) {
//     int i;
//     for(i=1;i<=n;i=i+2) {
//         printf("%d\n",i);
//     }
// }

/*
6. Write a function to calculate the factorial of a number. (TSRS)
*/

// #include<stdio.h>

// int fact(int n);
// int main() {
//     int n,an;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     an=fact(n);
//     printf("factorial is %d",an);

// return 0;
// }

// int fact(int n) {
//     int i,fac=1;
//     for(i=1;i<=n;i++) {
//         fac=i*fac;
//     }

//     return fac;

// }






/*
7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS) ans by sir
*/

// int fact(int n);
// int comb(int n, int r);
// #include<stdio.h> 
// int main() {
//     int n,r,ans;
//     printf("Enter value of n & r:- ");
//     scanf("%d %d",&n,&r);
//     ans= comb(n,r);
//     printf("Combination is %d",ans);
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
8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)
*/

// int fact(int n);
// int per(int n, int r);
// #include<stdio.h> 
// int main() {
//     int n,r,ans;
//     printf("Enter value of n & r:- ");
//     scanf("%d %d",&n,&r);
//     ans= per(n,r);
//     printf("Permutation is %d",ans);
// }

// int per(int n, int r) {
//     int p;
//     p=fact(n)/fact(n-r);
//     return p;
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
9. Write a function to check whether a given number contains a given digit or not.
(TSRS) (ans by sir)
*/

// #include <stdio.h>

// int digi(int n, int n1);
// int main()
// {
//     int n, n1, ans;
//     printf("Enter a number and enter a digit:- ");
//     scanf("%d%d", &n, &n1);
//     ans = digi(n, n1);
//     if (ans == 1)
//     {
//         printf("digit contain");
//     }
//     else
//     {
//         printf("digit not contain");
//     }
// }
// int digi(int n, int n1)
// {
//     int ls;
//     while (n != 0)
//     {
//         ls = n % 10;
//         n = n / 10;
//         if (ls == n1)
//         {
//             return 1;
//         }
//     }
// }

/*
10. Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)   
*/

#include<stdio.h>
void primefact(int n);

int main() {
    primefact(36);

    return 0;
}
void primefact(int n) {
    int i;
    for(i=2;n!=1;i++) {
        while(n%i==0) {
            n=n/i;
            printf("%d, ",i);
        }
    }
}