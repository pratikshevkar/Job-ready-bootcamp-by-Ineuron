/*
1. Write a program to find the Nth term of the Fibonnaci series.
*/

// #include<stdio.h>
// int main() {
//     int n,i,f1=0,f2=1,sum;
//     printf("Enter number:- ");
//     scanf("%d",&n);

//     if (n==1) {
//         printf("%d\n",f1);
//     }
//     else if (n==2) {
//         printf("%d\n",f2);
//     } else {
//         for(i=0; i<n; i++) {
//         sum=f1+f2;
//         f1=f2;
//         f2=sum;
//         if((i==n-1)) {
//              printf("%d\n",sum);
//         }
       
//     }

//     }

//     return 0;
// }

/*
2. Write a program to print first N terms of Fibonacci series
*/

// #include<stdio.h>
// int main() {
//     int n,i,f1=0,f2=1,sum;
//     printf("Enter number:- ");
//     scanf("%d",&n);

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

//     return 0;
// }

/*
3. Write a program to check whether a given number is there in the Fibonacci
series or not.
*/

// #include<stdio.h>
// int main() {
//     int n,i,f1=0,f2=1,sum;
//     printf("Enter number:- ");
//     scanf("%d",&n);

//     if (n==1) {
//         printf("%d is fibonacci number",n);
//     }
//     else if (n==2) {
//         printf("%d is fibonacci number",n);
//     } else if(n==0) {
//         printf("%d is fibonacci number",n);
//     }
//     else {
//         for(i=0; i<n; i++) {
//         sum=f1+f2;
//         f1=f2;
//         f2=sum;
//         if(n==sum) {
//             printf("%d is fibonacci number",n);
//             break;
//         } else {
//             printf("%d is not fibonacci number",n);
//             break;
//         }
//     }

//     }

//     return 0;
// }


/*
4. Write a program to calculate HCF of two numbers (HCF= num1*num2/LCM)
*/

// #include<stdio.h>
// int main() {
//     int n1,n2,i,h;
//     printf("Enter two number:- ");
//     scanf("%d%d",&n1,&n2);

//     for(i=1;i<=n1*n2;i++) {

//         if(i%n1==0 && i%n2==0) {
//             break;
//         }
//     }
//     h=n1*n2/i;
//     printf("HCF is %d",h);

//     return 0;
// }

/*
5. Write a program to check whether two given numbers are co-prime
numbers or not
*/

// #include<stdio.h>
// int main() {
//     int n1,n2,i,h;
//     printf("Enter two number:- ");
//     scanf("%d%d",&n1,&n2);

//     for(i=1;i<=n1*n2;i++) {

//         if(i%n1==0 && i%n2==0) {
//             break;
//         }
//     }
//     h=n1*n2/i;
//     if(h==1) {
//         printf("Co-prime");
//     }

//     return 0;
// }

/*
6. Write a program to print all Prime numbers under 100
*/
// #include<stdio.h>
// int main() {
//     int i,p,c=0;

//     for(i=2; i<=100; i++) {

//         for(p=1; p<=100; p++) {
//             if(i%p==0) {
//                 c++;
//             }
//         }
//         if(c==2) {
//             printf("%d ", i);
//         }
//         c=0;

//     }

//     return 0;
// }

/*
7. Write a program to print all Prime numbers between two given numbers
*/

// #include<stdio.h>
// int main() {
//     int i,p,c=0,in1,in2;

//     printf("Give two numbers:- ");
//     scanf("%d %d",&in1,&in2);

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

//     return 0;
// }

/*
8. Write a program to find next Prime number of a given number
*/

// #include<stdio.h>
// int main() {
//     int i,p,c=0,in1,in2;

//     printf("Enter numbers:- ");
//     scanf("%d",&in1);
//     in2=in1+1;

//     for(i=in1+1; i<=in2; i++) {

//         for(p=1; p<=in2; p++) {
//             if(i%p==0) {
//                 c++;
//             }
//         }
//         if(c==2) {
//             printf("%d ", i);
//             break;
//         }
//         c=0;
//         in2++;

//     }

//     return 0;
// }

/*
9. Write a program to check whether a given number is an Armstrong number
or not
*/
#include<stdio.h>
#include<math.h>
int main() {
    int n,c=0,nn,rem=0,t,ans=0;
    printf("Enter a number:- ");
    scanf("%d",&n);
    nn=n;
    t=n;
     while(n!=0) {
    n=n/10;
    c++;
   }
    while(nn!=0) {
        rem=nn%10;
        ans=ans+pow(rem,c);
        nn=nn/10;
    }  
 
    if(ans==t) {
        printf("Given number is amstrong");
    } else {
        printf("Given number is not amstrong");
    }

    return 0;
}

/*
10. Write a program to print all Armstrong numbers under 1000
*/

// #include<stdio.h>
// #include<math.h>
// int main () {
//     int n=1000,a,b,count = 0, rem;
//     int sum = 0;
//     a=n;
//     while(a) {
//         b=a;
//         while(b) {
//             b=b/10;
//             count++;
//         }
//         b=a;
//         while(b) {
//             rem =b%10;
//             sum = sum + pow(rem,count);
//             b= b/10;
//         }
//         if(sum == a)
//         printf("%d ",sum);
//         sum =0;
//         rem=0;
//         count=0;
//         a--;
//     }
//     return 0;
// }


