/*
1. Write a program to check whether a given number is positive or non-positive. 
*/

// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter number:-");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Given number is non positive");
//     }
//     else
//     {
//         printf("Given number is positive");
//     }
//     return 0;
// }

/*
2. Write a program to check whether a given number is divisible by 5 or not
*/

// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter number:- ");
//     scanf("%d",&a);
//     if(a%5==0) {
//         printf("%d is divisible by 5",a);
//     }
//     else
//     {
//          printf("%d is not divisible by 5",a);
//     }
// return 0;
// }

/*
3. Write a program to check whether a given number is an even number or an odd 
number.
*/

// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter a number:- ");
//     scanf("%d",&a);
//     if(a%2==0) {
//         printf("%d is an even number",a);
//     }
//     else
//     {
//         printf("%d is an odd number",a);
//     }
//     return 0;
// }

/*
4. Write a program to check whether a given number is an even number or an odd 
number without using % operator. 
*/

// #include<stdio.h>
// int main() {
//     int a,n;
//     printf("Enter number:- ");
//     scanf("%d",&n);
//     a=n/2;
//     if(a*2==n) {
//         printf("%d is even number",n);
//     }
//     else
//     {
//         printf("%d is odd number",n);
//     }

//     return 0;

// }

/*
5. Write a program to check whether a given number is a three-digit number or not. 
*/ 

// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter a number:-");
//     scanf("%d",&a);
//     if(a>=100 && a<=999) {
//         printf("Given number is three digit number");
//     } 
//     else {
//         printf("Given number is not three digit number");
//     }
//     return 0;
// }


/*
6. Write a program to print greater between two numbers. Print one number of both are 
the same.
*/

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Give two numbers:- ");
//     scanf("%d%d", &a, &b);

//     if (a == b)
//     {
//         printf("both are same %d", a);
//     }
//     if (a > b)
//     {
//         printf("%d is grater number", a);
//     }

//     if (a < b)
//     {
//         printf("%d is grater number", b);
//     }
//     return 0;
// }

/*
7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots
*/

// #include<stdio.h>
// int main() {
//     int a,b,c,d;
//     printf("Enter a quadratic equetion using variable x:- ");
//     scanf("%dx^2+%dx+%d",&a,&b,&c);

//     d=(b*b)-(4*a*c);

//     if(d>0) {
//         printf("root are real and distinct");
//     } else if (d<0) {
//         printf("root are imagnary");
//     }else
//     {
//         printf("root are real and equal");
        
//     }

//     return 0;
// }

/*
8. Write a program to check whether a given year is a leap year or not.
*/

// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter an year:- ");
//     scanf("%d", &year);
//     if (year % 4 == 0)
//     {
//         printf("%d is a leap year",year);
//     }
//     else
//     {
//         if (year % 100 == 0)
//         {
//             printf("%d is a leap year",year);
//         }
//         else
//         {
//             if (year % 400 == 0)
//             {
//                 printf("%d is a leap year",year);
//             }
//             else
//             {
//                 printf("%d is not a leap year",year);
//             }
//         }
//     }
//     return 0;
// }

/*
9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.
*/

// #include<stdio.h>
// int main() {
//     int num1,num2,num3;
//     printf("Enter an three numbers:-");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     if(num1>=num2 && num1>=num3) {
//         printf("%d is greater number",num1);
//     }
//     else {
//         if(num2>=num1 && num2>=num3) {
//             printf("%d is greater number",num2);
//         }
//         else {
//             printf("%d is greater number",num3);
//         }
//     }

//     return 0;
// }

// sir answer

// int main() {
//     int a,b,c;
//     printf("Enter three numbers:- ");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("%d",a>b?a>c?a:c:b>c?b:c);

//     return 0;
// }


/*
10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage. 
*/

// #include<stdio.h>
// int main() {
//     float a,b,c,y;
//     printf("Enter cost price:- ");
//     scanf("%f",&a);
//     printf("Enter selling price:- ");
//     scanf("%f",&b);

//     if(a<b) {
//         c=b-a;
//         y=(c*100)/a;
//         printf("Your profit is rs %.2f which is %.2f percent.",c,y);
//     }
//     else
//     {
//         c=a-b;
//         y=(c*100)/a;
//         printf("Your loss is rs %.2f which is %.2f percent.",c,y);
//     }
//     return 0;
// }

/*
11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.
*/

// #include<stdio.h>
// int main() {
//     int m1,m2,m3,m4,m5,sum;
//     printf("Enter marks of your five subjects:- ");
//     scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    
//     if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33 ) {
//         printf("You passed the examination");
//     }
//     else
//     {
//         printf("You failed the examination");
//     }

// }

/*
12. Write a program to check whether a given alphabet is in uppercase or lowercase.
*/

// #include<stdio.h>
// int main() {
//     char c;
//     printf("Enter character:- ");
//     scanf("%c",&c);
//     if(c>=65 && c<=90) {
//         printf("%c is uppercase",c);
//     }
//     else
//     {
//         if(c>=97 && c<=122){
//             printf("%c is lowercase",c);
//         }
//         else{
//             printf("eror not entered value between a to z or A to Z ");
//         }
        
//     }
//     return 0;
// }

/*
13. Write a program to check whether a given number is divisible by 3 and divisible by 2. 
*/

// #include<stdio.h>
// int main() {
//     int num;
//     printf("Enter a number:- ");
//     scanf("%d",&num);
//     if(num%2==0 && num%3==0) {
//         printf("%d is divisible by 3 and 2",num);
//     }
//     else {
//         printf("%d is not divisible by 3 and 2",num);
//     }

//     return 0;
// }

/*
14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/

// #include<stdio.h>
// int main() {
//     int num;
//     printf("Enter a number:- ");
//     scanf("%d",&num);
//     if(num%7==0 || num%3==0) {
//         printf("%d is divisible by 7 or 3",num);
//     }
//     else {
//         printf("%d is not divisible by 7 or 3",num);
//     }

//     return 0;
// }

/*
15. Write a program to check whether a given number is positive, negative or zero.
*/

// #include<stdio.h>
// int main() {
//     int num;
//     printf("Enter a number:- ");
//     scanf("%d",&num);
//     if(num>0) {
//         printf("%d is positive number.",num);
//     }
//     else {
//         if (num<0)
//         {
//              printf("%d is negative number.",num);
//         }
//         else {
//              printf("%d is a zero value.",num);
//         }
        
//     }
//     return 0;
// }

/*
16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.
*/

// #include<stdio.h>
// int main() {
//     char ch;
//     printf("Enter a number:- ");
//     scanf("%c",&ch);
//     if(ch>=65 && ch<=90) {
//         printf("%c is uppercase",ch);
//     }
//     else
//     {
//         if(ch>=97 && ch<=122){
//             printf("%c is lowercase",ch);
//         }
//         else{
//             if(ch>=48 && ch<=57){
//                 printf("%c is an digit",ch);
//             }
//             else {
//                 printf("%c is an special character",ch);
//             }
//         }
        
//     }

//     return 0;
// }

/*
17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not.
*/

// #include<stdio.h>
// int main() {
//     int s1,s2,s3;
//     printf("Enter length of first side:- ");
//     scanf("%d",&s1);
//     printf("Enter length of second side:- ");
//     scanf("%d",&s2);
//     printf("Enter length of third side:- ");
//     scanf("%d",&s3);

//     if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) {
//         printf("The traingle length is valid");
//     }
//     else
//     {
//         printf("The traingle length is not valid");
//     }

//     return 0;

// }

/*
18. Write a program which takes the month number as an input and display number of 
days in that month 
*/

// #include <stdio.h>
// int main()
// {
//     int mnum;
//     printf("Enter month number:- ");
//     scanf("%d", &mnum);
//     if (mnum == 1 || mnum == 3 || mnum == 5 || mnum == 7 || mnum == 8 || mnum == 10 || mnum == 12)
//     {
//         printf("there are 31 days in month %d", mnum);
//     }
//     else
//     {
//         if (mnum == 2)
//         {
//             printf("there are 28 or 29 days in month %d", mnum);
//         }
//         else
//         {
//             printf("there are 30 days in month %d", mnum);
//         }
//     }

//     return 0;
// }