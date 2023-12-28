/*
1. Write a program to print unit digit of a given number
*/

// #include<stdio.h>
// int main() {
//     int a,b;
//     printf("Enter Number:- ");
//     scanf("%d",&a);
//     b = a%10;
//     printf("Unit digit of given number is %d",b);
    
//     return 0;

// }

/*
2. Write a program to print a given number without its last digit.
*/

// #include<stdio.h>

// int main() {
//     int a,b;
//     printf("Enter Number:- ");
//     scanf("%d",&a);
//     b = a/10;
//     printf("Give number without it's last digit is %d",b);

//     return 0;
// }

/*
3. Write a program to swap values of two int variables
*/

// #include<stdio.h>

// int main() {
//     int a,b,c;
//     printf("Enter value to put in variable a:- ");
//     scanf("%d",&a);
//     printf("Enter value to put in variable b:- ");
//     scanf("%d",&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("Value of a is %d and value of b is %d",a,b);

//     return 0;
// }

/* 
4. Write a program to swap values of two int variables without using a third variable.
*/

// #include<stdio.h>

// int main() {
//     int a,b;
//     printf("Enter the value of variable a:- ");
//     scanf("%d",&a);
//     printf("Enter the value of variable b:- ");
//     scanf("%d",&b);
//     b=a+b;
//     a=b-a;
//     b=b-a;
//     printf("The value of a is %d and value of b is %d",a,b);

//     return 0;
// }

/*
5. Write a program to input a three-digit number and display the sum of the digits. 
*/

// #include<stdio.h>

// int main() {
//     int n,a=0;
//     printf("Enter three digit number:- ");
//     scanf("%d",&n);
//     a+=n%10;
//     n=n/10;

//     a+=n%10;
//     n=n/10;

//     a+=n%10;
//     n=n/10;
//     printf("The sum is %d",a);

//     return 0;
    
// }

/*
6. Write a program which takes a character as an input and displays its ASCII code.
*/

// #include<stdio.h>

// int main() {
//     char a;
//     printf("Enter character to get ASCII code:- ");
//     scanf("%c",&a);
//     printf("%d",a);

//     return 0;
// }

/*
7. Write a program to find the position of first 1 in LSB.
*/

// #include<stdio.h>
// int main() {
//     int x=0,count=0, result = 0;
//      result=x&1;
//      count++;
//      if(result==1) {
//         printf("%d",count);
//      }
//      x=x>>1;

//      result=x&1;
//      count++;
//      if(result==1) {
//         printf("%d",count);
//      }
//      x=x>>1;

//      result=x&1;
//      count++;
//      if(result==1) {
//         printf("%d",count);
//      }
//      x=x>>1;

//      result=x&1;
//      count++;
//      if(result==1) {
//         printf("%d",count);
//      }
//      x=x>>1;

     /*OR*/
    //  while(x!=0) {
    //  result=x&1;
    //  count++;
    //  if(result==1) {
    //     printf("%d",count);
    //     break;
    //  }
    //  x=x>>1;
    //  }

// return 0;
// }


/* 8. Write a program to check whether the given number is even or odd using a bitwise 
operator. */

// #include<stdio.h>
// int main() {
//     int num, result;
//     printf("Enter a number:- ");
//     scanf("%d",&num);
//     result = num&1;
//     if(result==1) {
//         printf("odd");

//     } else {
//         printf("even");

//     }

//     return 0;
// }

/*
9. Write a program to print size of an int, a float, a char and a double type variable 
*/

// #include<stdio.h>

// int main() {
//     int i,f,c,d;
//     i = sizeof(int);
//     f = sizeof(float);
//     c = sizeof(char);
//     d = sizeof(double);


//     printf("Size of int is %d\n",i);
//     printf("Size of float is %d\n",f);
//     printf("Size of char is %d\n",c);
//     printf("Size of double is %d",d);
//     return 0;

// }

/* 
10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340) 
*/

// #include<stdio.h>

// int main() {
//     int a,n,z=0;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     a= n/10;
//     printf("New number is %d%d",a,z);
//     return 0;

// }

/*Sir Answer*/

// #include<stdio.h>

// int main() {
//     int a,n;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     a= n/10;
//     a= a*10;
//     printf("New number is %d",a);
//     return 0;

// }


/*
11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/

// #include<stdio.h>

// int main() {
//      int a,n;
//     printf("Enter a number:- ");
//     scanf("%d",&a);
//     printf("Enter a digit:- ");
//     scanf("%d",&n);
//     printf("New number is %d%d",a,n);

//     return 0;

// }

/*Sir Answer*/

// #include<stdio.h>

// int main() {
//      int a,n;
//     printf("Enter a number:- ");
//     scanf("%d",&a);
//     printf("Enter a digit:- ");
//     scanf("%d",&n);
//     a=a*10+n;
//     printf("New number is %d",a);

//     return 0;

// }



/*
12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD. 
*/

// #include<stdio.h>

// int main() {
//     float a,x;
//     printf("Enter value in INR:-");
//     scanf("%f",&a);
//     x=(a*1)/76.23;
//     printf("Value in USD is %f",x);

//     return 0;
// }

/*
13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right.
*/

// #include<stdio.h>

// int main() {
//     int a,b,c;
//     printf("Enter three-digit number:- ");
//     scanf("%d",&a);
//     b=a%10;
//     a=a/10;
//     c=a%10;
//     a=a/10;
//     printf("New number is:- %d%d%d",b,a,c);

//     return 0;
// }

/*Sir Ans*/

// #include<stdio.h>

// int main() {
//     int a,b;
//     printf("Enter three-digit number:- ");
//     scanf("%d",&a);
//     b=a%10*100;
//     a=a/10+b;
//     printf("New number is:- %d",a);

//     return 0;
// }

