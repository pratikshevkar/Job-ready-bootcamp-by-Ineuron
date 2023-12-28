/*
1. Write a program which takes the month number as an input and display
number of days in that month.
*/

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter month number:- ");
//     scanf("%d",&n);

//     switch(n)
//     {
//           case 1:
//           printf("31 Days");
//           break;

//           case 2:
//           printf("28 or 29 Days");
//           break;

//           case 3:
//           printf("31 Days");
//           break;

//           case 4:
//           printf("30 Days");
//           break;

//           case 5:
//           printf("31 Days");
//           break;

//           case 6:
//           printf("30 Days");
//           break;

//           case 7:
//           printf("31 Days");
//           break;

//           case 8:
//           printf("31 Days");
//           break;

//           case 9:
//           printf("30 Days");
//           break;

//           case 10:
//           printf("31 Days");
//           break;

//           case 11:
//           printf("30 Days");
//           break;

//           case 12:
//           printf("31 Days");
//           break;

//           default:
//           printf("Wrong number entered");
//           break;
//     } 

//     return 0;
// }

/*
2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

// #include<stdio.h>
// int main() {
//     int n1,n2;
//     char c;

//     printf("Selct your option\n");
//     printf("a. Addition\n");
//     printf("b. Substraction\n");
//     printf("c. Multiplication\n");
//     printf("d. Division\n");
//     printf("e. Exit\n");
//     scanf("%c",&c);

//     printf("Enter two numbers:- ");
//     scanf("%d %d",&n1,&n2);

//     switch(c) {
//         case 'a':
//         printf("Sum is %d\n", n1+n2);
//         break;

//         case 'b':
//         printf("Substraction is %d\n", n1-n1);
//         break;

//         case 'c':
//         printf("Multiplication is %d\n", n1*n1);
//         break;

//         case 'd':
//         printf("Division is %d\n", n1/n2);
//         break;

//         case 'e':
//         break;

//         default:
//         printf("Wrong option choosen\n");
//         break;
//     }

//     return 0;
// }

/*
3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.
*/

// #include<stdio.h>
// int main() {
//     int n;

//     printf("Enter day number:- ");
//     scanf("%d",&n);

//     switch(n) {
//         case 1:
//         printf("It's Monday");
//         break;

//         case 2:
//         printf("It's Tuesday");
//         break;

//         case 3:
//         printf("It's Wednesday");
//         break;

//         case 4:
//         printf("It's Thursday");
//         break;

//         case 5:
//         printf("It's Friday");
//         break;

//         case 6:
//         printf("It's Saturday");
//         break;

//         case 7:
//         printf("Enjoy your holiday");
//         break;

//         default:
//         printf("Wrong option selected");
//         break;
//     }

//     return 0;
// }

/*
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

// #include<stdio.h>
// int main() {
//     int n1,n2,n3;
//     char c;

//     printf("Selct your option\n");
//     printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
//     printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
//     printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
//     printf("e. Exit\n");
//     scanf("%c",&c);

//     printf("Enter three numbers:- ");
//     scanf("%d %d %d",&n1,&n2,&n3);

//     switch(c) {
//         case 'a':
//          if(n1==n2 || n1==n3 || n3==n2) {
//             printf("It's isosceles triangle");
//         } else {
//             printf("It's not isosceles triangle");
//         }
//         break;

//         case 'b':
//         if(n1>n2 && n1>n3) {
//             if(n1*n1==n2*n2+n3*n3) {
//                 printf("It's right angled triangle");
//             } else {
//                 printf("It's not right angled triangle");
//             }
//         } else if (n2>n1 && n2>n3) {
//             if(n2*n2==n1*n1+n3*n3) {
//                 printf("It's right angled triangle");
//             } else {
//                 printf("It's not right angled triangle");
//             }

//         } else {
//             if(n3*n3==n2*n2+n1*n1) {
//                 printf("It's right angled triangle");
//             } else {
//                 printf("It's not right angled triangle");
//             }
//         }
//         break;

//         case 'c':
//         if(n1==n2 && n2==n3 && n3==n1) {
//             printf("It's euilateral triangle");
//         } else {
//             printf("It's not euilateral triangle");
//         }
//         break;

//         case 'e':
//         break;

//         default:
//         printf("Wrong option choosen\n");
//         break;
//     }

//     return 0;
// }

/*
5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/

// #include<stdio.h>
// int main() {
//     int var;
//     printf("Enter a number:- ");
//     scanf("%d",&var);

//     switch(var) {
//         case 1:
//         System.out.println("good");
//         break;

//         case 2:
//         System.out.println("better");
//         break;

//         case 3:
//         System.out.println("best");
//         break;

//         default:
//         System.out.println("invalid");
//         break;
//     }

//     return 0;
// }

/*
6. Program to check whether a year is a leap year or not. Using switch
statement (ans by sir and you also)
*/

// #include<stdio.h>
// int main() {
//     int y;

//     printf("Enter a year:- ");
//     scanf("%d",&y);

//     switch(y%100==0) {
//         case 1:
//         switch (y%400==0)
//         {
//         case 1:
//         printf("leap year");
//         break;

//         case 0:
//         printf("not leap year");
//         break;
//         } break;

//         case 0:
//         switch (y%4==0)
//         {
//         case 1:
//         printf("leap year");
//             break;
//         case 0:
//         printf("not leap year");
//         break;
//         } break;
//     }

//     return 0;
// }

/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
(ans by sir make clear)
*/

// #include <stdio.h>

// int main()
// {
//     float x, amount=0, total=0;
//     printf("Enter units:- ");
//     scanf("%f",&x);

//     switch( x<=50)
//     {
//         case 1: amount = x*0.5;
//                 break;
//         case 0: switch(x<=150) 
//                 {
//                     case 1: amount = 25 + (x-50)*0.75;
//                             break;
//                     case 0: switch(x <= 250)
//                              {
//                                 case 1: amount =100+(x-150)*1.20;
//                                         break;
//                                 case 0: amount = 220 +(x-250)*1.5;
//                                         break;
//                              } break;

//                 } break;
//     }

//     total = amount+amount*0.20;
//     printf("Total amount = %f",total);

//     return 0;
// }

/*
8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch  statement.(ans from net)
*/

// #include<stdio.h>

// int main() {

//     int n;
//     printf("Enter a number:- ");
//     scanf("%d",&n);

//     switch(n<0) {
//         case 1:
//         n=n*-1;
//         printf("%d",n);
//         break;

//         case 0:
//         n=n*-1;
//         printf("%d",n);
//         break;
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number:- ");
//     scanf("%d",&n);

//     switch(n) {
//         case -5:
//         break;
//     }

// }

/*
9. Program to Convert even number into its upper nearest odd number
Switch Statement.(ans by sir and me)
*/

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter number:- ");
//     scanf("%d",&n);

//     switch(n%2==0) {
//         case 1:
//         n=n+1;
//         printf("number is %d",n);
//         break;

//         case 0:
//         printf("number is %d",n);
//         break;
//     }

//     return 0;
// }

/*
10. C program to find all roots of a quadratic equation using switch case
*/

// #include<stdio.h>
// #include<math.h>
// int main() {
//     float a,b,c,d,ans, ans1;
//     printf("Enter value of a,b,c:-");
//     scanf("%f %f %f",&a,&b,&c);

//     d= b*b-4*a*c;

//     switch (d>0)
//     {
//     case 1:
//     ans=(-b*-1)+sqrt(d)/2*a;
//         ans1=(-b*-1)-sqrt(d)/2*a;
//         printf("root are %f & %f",ans,ans1);
//         break;

//         case 0:
//         switch (d<0)
//         {
//         case 1:
//         ans=-(b/a*2)+sqrt(d)/2*a;
//         ans1=(b/a*2)-sqrt(d)/2*a;
//         printf("root are %f & %f",ans,ans1);
//             break;
        
//         case 0:
//         switch(d==0) {
//             ans= -1*(b/2*a);
//             printf("root are %f & %f",ans);
//         }
//             break;
//         }
//         break;
//     }

// return 0;
// }


