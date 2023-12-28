/*
Write a program to draw the following patterns:
*/

/*
1. 
*    
**
***
****
*****
*/

// #include<stdio.h>
// int main() {
//     int i,j,n=1;

//     for(i=1; i<=5; i++) {

//         for(j=1; j<=5; j++) {
//             if(j<=i) {
//                 printf("*");    
//             } else {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
2.

*/

// #include<stdio.h>
// int main() {
//     int i,j,p=4;
//     for(i=1; i<=5; i++) {

//         for(j=1; j<=5; j++){
//             if(j>=i+p) {
//                 printf("*");
//                 p=p-2;
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }

/*
3.
*****
****
***
**
*

*/
// #include<stdio.h>
// int main() {
//     int i,j;
//     for(i=1; i<=5; i++) {

//         for(j=1; j<=5; j++){
//             if(j<=6-i) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }

/*
4.
*****
 ****
  ***
   **
    *

*/

// #include<stdio.h>
// int main() {
//     int i,j;
//     for(i=1; i<=5; i++) {

//         for(j=1; j<=5; j++){
//             if(j>=i) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }

/*
5.

*/

// #include<stdio.h>
// int main() {
//     int i,j,p=4;
//     for(i=1; i<=5; i++) {

//         for(j=1; j<=9; j++){
//             if(j=5) {
//                 printf("*");
//                 } else {
//                     printf(" ");
//                 }
//         }
//         printf("\n");
//     }
// return 0;
// }


/*
7.
**********
****  ****
***    ***
**      **
*        *

*/

// #include<stdio.h>
// int main() {
//     int i,j;
//     for(i=1; i<=5; i++) {

//         for(j=1; j<=5; j++){
//             if(j<=6-i) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//          for(j=1; j<=5; j++){
//             if(j>=i) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
    
// }

// return 0;
// }

/*
8.
   1
  121
 12321
1234321
ans by sir
*/
// #include<stdio.h>

// int main() {
//     int i,j,count=0;
//     for(i=0; i<=3;i++) {
//         count=0;
//         for (j = 0; j < (3-i); j++)
//             printf(" ");

//         for(j=0;j<=i;j++)
//             printf("%d",++count);
//             count--;

//               while (count)
//             printf("%d",count--);
//          printf("\n");
//         }


//     return 0;
// }

/*
10.
1234321
123 321
12   21
1     1
*/

// #include<stdio.h>

// int main() {
//     int i,j,count=0;
//     for(i=0; i<=3;i++) {
//         count=0;
//         for (j = 0; j <=(3-i); j++)
//             printf("%d",++count);

//         for(j=0;j<2*i-1;j++)
//             printf(" ");

//             if(i==0)
//             count--;

//               while (count)
//             printf("%d",count--);
//          printf("\n");
//         }
//     return 0;
// }

/*
14.
*
**
* *
*  *
******
*/

// #include<stdio.h>
// int main() {
//     int i,j;
//     for(i=0; i<5; i++) {
//         for(j=0; j<6; j++) {
//             if(j==0 || i==j || i==4) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// genrelized form of above

// #include<stdio.h>
// int main() {

//     int i,j,n;
//     printf("Enter bigger no to icrease size and smaller number to decrease size:- ");
//     scanf("%d",&n);
    
//     for(i=0; i<n; i++) {
//         for(j=0; j<n; j++) {
//             if(j==0 || i==j || i==n-1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
16.
    *    
   * *
  *   *
 *     *
*********
*/

// #include<stdio.h>

// int main() {
//     int i,j;

//     for(i=0; i<5; i++) {
//         for(j=0;j<9;j++) {
//             if(j==4-i || j==4+i || i==4) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
19.
  *****     *****  
 *******   *******
********* *********
******MySirG*******
 *****************
  ***************
   *************   
    ***********
     *********
      *******
       *****       
        ***
         *
*/

// #include<stdio.h>

// int main() {
//     int i,j;

//     for(i=0;i<3;i++) {
//         for(j=0;j<19;j++) {
//             if(((2-i <=j) && (j<=6+i)) || ((12-i <= j) && (16+i>=j))) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for(i=0;i<10;i++) {
//         for(j=0;j<19;j++) {
//             if((i==0) && (j==6)) {
//                 printf("MySirG");
//             }
//             if((i==0) && (j>=6) && (j<=11)) {
//                 continue;
//             }
//             if((i<=j) && (j<= 18-i) ) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

//solve this example to take number from user and change heart size 
