/*
1. Write a program to calculate sum of first N natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int n,sum=0,i;
//     printf("Enter number:- ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++) {
//         sum=sum+i;
//     }
//     printf("%d ",sum);
     
//     return 0;
// }

/*
2. Write a program to calculate sum of first N even natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int n,i,sum=0;
//     printf("Enter number:- ");
//     scanf("%d",&n);
//     for(i=1; i<=n*2; i++) {
//         i=i+1;
//         sum=sum+i;
//     }
//     printf("%d ",sum);

//     return 0;
// }

/*
3. Write a program to calculate sum of first N odd natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int n,i,sum=0;
//     printf("Enter number:- ");
//     scanf("%d",&n);
//     for(i=0; i<n*2; i++) {
//         i=i+1;
//         sum=sum+i;
//     }
//     printf("%d ",sum);

//     return 0;
// }

/*
4. Write a program to calculate sum of squares of first N natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int n,i,s,sum=0;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++) {
//         s=i*i;
//         sum=sum+s;
//     }
//     printf("%d ",sum);
    
//     return 0;
// }

/*
5. Write a program to calculate sum of cubes of first N natural numbers.
*/

// #include<stdio.h>
// int main() {
//     int n,i,s,sum=0;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++) {
//         s=i*i*i;
//         sum=sum+s;
//     }
//     printf("%d ",sum);
    
//     return 0;
// }

/*
6. Write a program to calculate factorial of a number.
*/

// #include<stdio.h>
// int main() {
//     int n,i,mul=1;
//     printf("Give number for factorial:- ");
//     scanf("%d",&n);
//     for(i=n;i>0;i--) {
//         mul=mul*i;
//     }
//         printf("%d",mul);

//     return 0;
// }

                           /*Sir ans*/
// #include<stdio.h>
// int main() {
//     int n,i,fact=1;
//     printf("Give number for factorial:- ");
//     scanf("%d",&n);
    
//     for(i=2; i<=n; i++) {
//         fact=fact*i;
//     }
// printf("factorial of %d is %d",n,fact);

//     return 0;
// }                           

/*
7. Write a program to count digits in a given number.
*/

// #include<stdio.h>
// int main() {
//     int n,i;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++) {
//         n=n/10;
//         if(n==0)
//         break;
//     }
//     printf("%d",i);

//     return 0;
// }

                         /*Sir ans*/
// #include<stdio.h>
// int main() {
//     int n,count =0;

//     printf("Enter value of n:- ");
//     scanf("%d",&n);

//     while(n!=0) {
//         n=n/10;
//         count++;
//     }
//     printf("Number of digit is %d", count);

//     return 0;
// }

/*
8. Write a program to check whether a given number is a Prime number or not.
*/

// #include <stdio.h>
// int main()
// {
//     int i, n;
//     printf("Enter a number:- ");
//     scanf("%d", &n);

//     if (n == 2)
//     {
//         printf("Prime");
//     }
//     else if (n == 1)
//     {
//         printf("Not prime ");
//     }
//     else
//     {
//         for (i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 printf("Not prime");
//                 break;
//             }
//         }
//         if (i == n)
//         {
//             printf("Prime");
//         }
//     }

//     return 0;
// }

                            /*Sir ans*/
// #include<stdio.h>
// int main() {
//     int n,i,flag=0;

//     printf("Enter number:- ");
//     scanf("%d",&n);

//     for(i=2; i<=n/2; i++) {
//         if(n%i==0) {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1) {
//         printf("Not prime");
//     } else {
//         printf("Prime");
//     }

//     return 0;
// }                            

/*
9. Write a program to calculate LCM of two numbers
*/

// #include<stdio.h>
// int main() {
//     int n1,n2,i;
//     printf("Enter two numbers:- ");
//     scanf("%d%d",&n1,&n2);

//     for(i=1;i<=n1*n2;i++) {

//         if(i%n1==0 && i%n2==0) {
//             break;
//         }
//     }
//     printf("LCM is %d",i);

//     return 0;
// }

                          /*Sir ans*/


/*
10. Write a program to reverse a given number
*/
/* (limited ans) */
// #include<stdio.h>
// int main() {
//        int n,i,j,p=0,c,n2,ip;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     n2=n;

//     for(ip=1;ip<=n;ip++) {
//         n=n/10;
//         if(n==0)
//         break;
//     }

// //     printf("%d",ip);
// if(ip==1) {
//     i=1;
// } else if (ip==2)
// {
//     i=10;  
// } else if (ip==3)
// {
//     i=100;
// } else {
//     i=1000;
// }

//     for(j=1; j<=ip; j++) {
//         c=n2%10;
//         p=p+i*c;
//         n2=n2/10;
//         i=i/10;     
//     }
//     printf("reverse number is %d\n",p);

//     return 0;
   
// }

                            /*Sir ans*/

// #include<stdio.h>
// int main() {
//     int n,remainder,reverse=0;

//     printf("Enter a number:- ");
//     scanf("%d",&n);

//     while(n != 0) {
//         remainder=n%10;
//         n=n/10;
//         reverse=reverse*10+remainder;
//     }
//     printf("reverse is %d",reverse);

//     return 0;
// }                            
