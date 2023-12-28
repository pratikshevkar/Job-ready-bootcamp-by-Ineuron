/*
1. Write a recursive function to print first N natural numbers 
*/

// #include<stdio.h>

// void num(int n);
// int main() {
//     num(5);

// return 0;
// }

// void num(int n) {
//     if(n>0) {
//         num(n-1);
//         printf("%d ",n);
//     }
    
// }

/********************************Sir Ans**********************************/
// #include<stdio.h>
// void num(int);

// void num(int n) {
//     if(n==0)
//     return;
//     num(n-1);
//     printf("%d",n);
// }
// int main () {
//     int n;
//     num(3);

//     return 0;
// }

/* 
2. Write a recursive function to print first N natural numbers in reverse order
*/

// #include<stdio.h>

// void num(int n);
// int main() {
//     num(5);

// return 0;
// }

// void num(int n) {
//     if(n>0) {
//         printf("%d ",n);
//         num(n-1); 
//     }
    
// }

/********************************Sir Ans**********************************/

// #include<stdio.h>
// void num(int);

// void num(int n) {
//     if(n==0)
//     return;
//     printf("%d ",n);
//     num(n-1);
    
// }
// int main () {
//     int n;
//     num(3);

//     return 0;
// }

/*
3. Write a recursive function to print first N odd natural numbers
*/

// #include<stdio.h>

// void odd(int n);
// int main() {
//     odd(5);

// return 0;
// }

// void odd(int n) {
//     if(n%2==0) {
//         n=n-1;
//     }
//     if(n>) {
//         odd(n-2); 
//         printf("%d ",n);
//     }
    
// }

/********************************Sir Ans**********************************/

// #include<stdio.h>
// void num(int);

// void num(int n) {
//     if(n==0)
//     return;
//     num(n-1);
//     printf("%d ",2*n-1);
    
// }
// int main () {
//     int n;
//     num(3);

//     return 0;
// }


/*
4. Write a recursive function to print first N odd natural numbers in reverse order
*/

// #include<stdio.h>

// void odd(int n);
// int main() {
//     odd(10);

// return 0;
// }

// void odd(int n) {
//     if(n%2==0) {
//         n=n-1;
//     }
//     if(n>0) {
//         printf("%d ",n);
//         odd(n-2); 
//     }
    
// }

/********************************Sir Ans**********************************/

// #include<stdio.h>
// void num(int);

// void num(int n) {
//     if(n==0)
//     return;
//     printf("%d ",2*n-1);
//     num(n-1);

    
// }
// int main () {
//     int n;
//     num(3);

//     return 0;
// }


/*
5. Write a recursive function to print first N even natural numbers
*/

// #include<stdio.h>

// void even(int n);
// int main() {
//     even(10);

// return 0;
// }

// void even(int n) {
//     if(n%2!=0) {
//         n=n-1;
//     }
//     if(n>0) {
//         even(n-2); 
//         printf("%d ",n);
//     }
    
// }

/*
6. Write a recursive function to print first N even natural numbers in reverse order
*/

// #include<stdio.h>

// void even(int n);
// int main() {
//     even(10);

// return 0;
// }

// void even(int n) {
//     if(n%2!=0) {
//         n=n-1;
//     }
//     if(n>0) {
//         printf("%d ",n);
//         even(n-2); 
        
//     }
    
// }

/*
7. Write a recursive function to print squares of first N natural numbers
*/

// #include<stdio.h>

// void num(int n);
// int main() {
//     num(5);

// return 0;
// }

// void num(int n) {
//     if(n>1) {
//         num(n-1);
//         printf("%d ",n*n);
//     }
    
// }

/*
8. Write a recursive function to print binary of a given decimal number
ans by sir
*/

// #include<stdio.h>
// void dtob(int x);
// int main() {
//     dtob(20);

//     return 0;
// }

// void dtob(int x) {
//     if(x>0) {
//         dtob(x/2);
//         printf("%d",x%2);
//     }
// }

/**********************************Other Method*****************************/

// #include<stdio.h>
// void binary(int n);
// int main() {
//     int x=12;
//     binary(x);

//     return 0;
// }
// void binary(int n) {
//     if(n==0) {
//         return;
//     }
//     binary(n>>1);
//     printf("%d",n&1);
// }

/*
9. Write a recursive function to print octal of a given decimal number
*/

// #include<stdio.h>
// void dtob(int x);
// int main() {
//     dtob(20);

//     return 0;
// }

// void dtob(int x) {
//     if(x>0) {
//         dtob(x/8);
//         printf("%d",x%8);
//     }
// }

/*
10. Write a recursive function to print reverse of a given number 
*/

// #include<stdio.h>

// void num(int n);
// int main() {
//     num(540);

// return 0;
// }

// void num(int n) {
//     if(n>0) {
//         printf("%d ",n%10);
//         num(n/10);
        
//     }
    
// }