/*
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
*/

// #include<stdio.h>
// int main() {
//     int i,a[50],n,sum=0;
//     printf("How many numbers you want to enter?");
//     scanf("%d",&n);
//     printf("Enter number in array;- \n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         sum=sum+a[i];
//     }
//     printf("Sum of array is:- %d",sum);

//     return 0;
// }

/*
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
*/

// #include<stdio.h>
// int main() {
//     int i,a[10],n,sum=0,avg;
//     printf("How many numbers you want to enter?");
//     scanf("%d",&n);
//     printf("Enter number in array;- \n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         sum=sum+a[i];
//     }
//     avg=sum/n;
//     printf("Average of array is:- %d",avg);

//     return 0;
// }

/*
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/

// #include<stdio.h>
// int main() {
//     int i,a[10],n,sume=0,sumo=0;
//     printf("How many numbers you want to enter?");
//     scanf("%d",&n);
//     printf("Enter number in array;- \n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         if(a[i]%2==0) {
//             sume=sume+a[i];
//         } else {
//             sumo=sumo+a[i];
//         }
        
//     }
//     printf("Sum of even element of array is:- %d\n",sume);
//     printf("Sum of odd element of array is:- %d",sumo);

//     return 0;
// }

/*
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/

// #include<stdio.h>
// int main() {
//     int i,a[10],n,p=0;
//     printf("How many numbers you want to enter?");
//     scanf("%d",&n);
//     printf("Enter number in array;- \n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         if(a[i]>p) {
//             p=a[i];
//         }
//     }
//     printf("Greatest number is:- %d",p);

//     return 0;
// }

/*
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/

// #include<stdio.h>
// int main() {
//     int i,a[10],n,min[10];
//     printf("How many numbers you want to enter?");
//     scanf("%d",&n);
//     printf("Enter number in array;- \n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         if(a[0]>a[i+1]) {
//             a[0]=a[i+1];
//         }
//     }
//     printf("Smallest number in array is:- %d",a[0]);

//     return 0;
// }

/*
6. Write a program to sort elements of an array of size 10. Take array values from the
user.
*/

// #include <stdio.h>
// int main()
// {
//     int i, a[10], n, j, temp;
//     printf("How many numbers you want to enter?");
//     scanf("%d", &n);
//     printf("Enter number in array;- \n");

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i <= n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

/*
7. Write a program to find second largest in an array.Take array values from the user.
*/

// #include <stdio.h>
// int main()
// {
//     int i, a[10], n, j, temp;
//     printf("How many numbers you want to enter?");
//     scanf("%d", &n);
//     printf("Enter number in array;- \n");

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i <= n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//         printf("%d ", a[n-2]);
    
//     return 0;
// }

/***************************Sir Ans****************************/

// #include<stdio.h>
// int main() {
//     int a[100], i, n, largest = 0, s_larges = 0;
//     printf("Enter size of array:- ");
//     scanf("%d",&n);
//     printf("Enter element in array:-\n");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     } 
//     largest = a[0];
//     for(i=1;i<n;i++) {
//         if(a[i]>largest) {
//             s_larges = largest;
//             largest = a[i];
//         }
//         if(a[i]>s_larges && a[i]<largest) {
//             s_larges=a[i];
//         }
//     }
//     printf("Second largest is %d",s_larges);
//     return 0;
// }

/*
8. Write a program to find the second smallest number in an array.Take array values
from the user.
*/

// #include <stdio.h>
// int main()
// {
//     int i, a[10], n, j, temp;
//     printf("How many numbers you want to enter?");
//     scanf("%d", &n);
//     printf("Enter number in array;- \n");

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i <= n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//         printf("%d ", a[(n-n)+1]);
    
//     return 0;
// }

/*
9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
*/

// #include<stdio.h>
// int main() {
//     int n,i,a[50];
//     printf("How many element?");
//     scanf("%d",&n);

//     printf("Enter vales in array:-\n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     printf("eversed array is:- \n");

//     for(i=n-1;i>=0;i--) {
//         printf("%d ",a[i]);
//     }

// return 0;
// }

/*
10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/

// #include<stdio.h>
// int main () {
//     int n,i,a[50],b[50];
//     printf("How many element?");
//     scanf("%d",&n);

//     printf("Enter vales in array:-\n");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         b[i]=a[i];
//     }

//     printf("Copied array:-\n");

//     for(i=0;i<n;i++) {
//         printf("%d ",b[i]);
//     }

// return 0;
// }
