/*
1. Write a function to find the greatest number from the given array of any size. (TSRS)
*/

// #include<stdio.h>
// int maxarray(int b[], int n);
// int main() {
//     int a[10],n,i,ans;
//     printf("How many element you want in array:- ");
//     scanf("%d",&n);

//     printf("Enter number in array:- ");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     ans = maxarray(a,n);
//     printf("Max element in array is:- %d",ans);
//     return 0;
// }

// int maxarray(int b[], int n) {
//     int max,i;
//     max=b[0];
//     for(i=0;i<n;i++) {
//         if(max < b[i]) {
//             max=b[i];
//         }
//     }
//     return max;
// }

/*
2. Write a function to find the smallest number from the given array of any size. (TSRS)
*/

// #include<stdio.h>
// int minarray(int b[], int n);
// int main() {
//     int a[10],n,i,ans;
//     printf("How many element you want in array:- ");
//     scanf("%d",&n);

//     printf("Enter number in array:- ");

//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     ans = minarray(a,n);
//     printf("Min element in array is:- %d",ans);
//     return 0;
// }

// int minarray(int b[], int n) {
//     int min,i;
//     min=b[0];
//     for(i=0;i<n;i++) {
//         if(min > b[i]) {
//             min=b[i];
//         }
//     }
//     return min;
// }

/*
3. Write a function to sort an array of any size. (TSRS)
*/

// #include<stdio.h>
// int sortarray(int b[], int n);
// int main() {
//     int n,a[50],i;
//     printf("Enter how many elements:-\n");
//     scanf("%d",&n);

//     printf("Enter element in array:-\n");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
  
//      sortarray(a,n);
    
//     for(i=0;i<n;i++) {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// int sortarray(int b[], int n) {
//     int i,j,temp;
//         for (i = 0; i <= n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (b[i] > b[j])
//             {
//                 temp = b[i];
//                 b[i] = b[j];
//                 b[j] = temp;
//             }
//         }
//     }

//     return b;
// }

/*
4. Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70];  n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/

// #include<stdio.h>
// int main() {
//     int n=5,a[50]={32,29,40,12,70},i,temp,n1,j;
//     char c;

//     printf("Selct you chooce:-\n");
//     printf("l. Left\nr. right\n");
//     scanf("%c",&c);
//     printf("How many shift you want:-");
//     scanf("%d",&n1);
   
//     switch(c){
//         case 'l':
//          for(j=0;j<n1;j++){
//          temp=a[n-n];
//          for(i=0;i<n;i++) {
//              a[i]=a[i+1];
//          }
//           a[n-1]=temp;
//         }
//         break;

//         case 'r':
//         for(j=0;j<n1;j++) {
//             temp=a[n-1];
//          for(i=(n-1);i>0;i--) {
//              a[i]=a[i-1];
//          }
//            a[n-n]=temp;
//         }
//         break;

//         default:
//         printf("Wrong chooce entered");
//         break;
//     }

//     for(i=0;i<n;i++) {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
/*******************************With function*********************************/
// #include<stdio.h>
// void lshift(int n1, int b[]);
// void rshift(int n1, int b[]);
// int main() {
//     int a[50]={32,29,40,12,70},n1;
//     char c;

//     printf("Selct you chooce:-\n");
//     printf("l. Left\nr. right\n");
//     scanf("%c",&c);
//     printf("How many shift you want:-");
//     scanf("%d",&n1);
//     if(c=='l') {
//         lshift(n1,a);
//     }   
//     if(c=='r') {//by giving semicolan why the output is 40 12 70 32 29 32 29 40 12 70 it should be 40 12 70 32 29
//         rshift(n1,a);
//     }
// return 0;
// }

// void lshift(int n1, int b[]) {
//     int i,j,temp,n=5;
//         for(j=0;j<n1;j++){
//          temp=b[n-n];
//          for(i=0;i<n;i++) {
//              b[i]=b[i+1];
//          }
//           b[n-1]=temp;
//         }

//      for(i=0;i<n;i++) {
//         printf("%d ",b[i]);
//     }

// }
// void rshift(int n1, int b[]) {
//     int i,j,temp,n=5;
//        for(j=0;j<n1;j++) {
//             temp=b[n-1];
//          for(i=(n-1);i>0;i--) {
//              b[i]=b[i-1];
//          }
//            b[n-n]=temp;
//         }

//     for(i=0;i<n;i++) {
//         printf("%d ",b[i]);
//     }
// }

/*
5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
Function has to return the value of the element.
*/
/********************************Ans By Sir************************************/
// #include<stdio.h>
// int occur(int b[]);
// int main() {
//     int a[] = {5,3,1,7,7,2}, relement;
//     relement = occur(a);
//     printf("%d",relement);
//     return 0;
// }
// int occur(int b[]) {
//     int i;
//     for(i=0;i<6;i++) {
//         if(b[i] == b[i+1]) {
//             return b[i];
//         }
//     }
// }

/*
6. Write a function in C to read n number of values in an array and display it in reverse 
order. (you can use reverse loop also)
*/
// #include<stdio.h>
// int main() {
//     int a[30],i,temp,n,j,nn;
//     printf("How many numbers:-\n");
//     scanf("%d",&n);
//     printf("Enter numbers in array:-\n");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     j=n-1;
//     nn=n+1;

//     if(n%2!=0) {
//         n=n+1;
//     }
  
//     for(i=0;i<(n/2);i++) {
//         temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         --j;
//     }
//     for(i=0;i<(nn-1);i++) {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

/*************************Using function************************/
// #include<stdio.h>
// void rev(int b[], int n);
// int main() {
//     int a[30],i,n;
//     printf("How many numbers:-\n");
//     scanf("%d",&n);
//     printf("Enter numbers in array:-\n");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     rev(a,n);
// return 0;
// }

// void rev(int b[], int n) {
//     int j,i,nn,temp;
//        j=n-1;
//     nn=n+1;

//     if(n%2!=0) {
//         n=n+1;
//     }
  
//     for(i=0;i<(n/2);i++) {
//         temp=b[i];
//         b[i]=b[j];
//         b[j]=temp;
//         --j;
//     }
//     for(i=0;i<(nn-1);i++) {
//         printf("%d ",b[i]);
//     }

// }


/*
7. Write a function in C to count a total number of duplicate elements in an array.(you can do this by hashing)
*/
// #include<stdio.h>
// int count(int b[]);
// int main() {
//     int a[30]={5,6,7,5,7},ans;
//     ans=count(a);
//     printf("%d",ans);

//     return 0;
// }
// int count(int b[]) {
//     int i,j,total=0;
//        for(i=0;i<5;i++) {
//         for(j=i+1;j<5;j++) {
//             if(b[i]==b[j]) {
//                 total++;
//             }

//         }
//     }
//     return total;
// }

/*
8. Write a function in C to print all unique elements in an array.(you can do this by hashing)
*/

// #include<stdio.h>
// void unique(int b[]);
// int main() {
//     int a[30]={2,4,9,5,4};
//     unique(a);

//     return 0;
// }
// void unique(int b[]) {
//     int i,j,flag=0;
//        for(i=0;i<5;i++) {
//         for(j=0;j<5;j++) {
//             if(b[i]==b[j]) {
//                 flag++;
//             }
//         }
//            if(flag<=1) {
//             printf("%d ",b[i]);
//            }
//             flag =0;
//     }
// }

/*
9. Write a function in C to merge two arrays of the same size sorted in descending 
order
*/
// #include<stdio.h>
// void merge(int p[], int q[], int r[]);
// int main() {
//     int a[]={5,15,49,20,4},b[]={6,16,50,21,7},c[10];
//     merge(a,b,c);

//     return 0;
// }
// void merge(int p[], int q[], int r[]) {
//     int i,n=5,j,temp;
//         for(i=0;i<10;i++) {
//         if(i<5) {
//             r[i] = p[i];
//         } else {
//             r[i] = q[i-n];
//         }
//     }

//         for(i=0;i<10;i++) {
//         for(j=i+1;j<10;j++) {
//             if(r[i]<r[j]) {
//                 temp = r[i];
//                 r[i] = r[j];
//                 r[j] = temp;
//             }
//         }
//     }


//     for(i=0;i<10;i++) {
//         printf("%d ",r[i]);
//     }

// }

/*******************************Sir Ans*********************************/
// TODO: (also write condition for j and se code again from video)

// #include<stdio.h>
// int main() {
//     int a[] = {1,3,5,7,9};
//     int b[] = {2,6,8,11,12};
//     int c[10],k=0,i=0,j=0;

//     for(k=0; k<10; k++) {
//         if(i>=5) {
//             while (k < 10) {
//                 c[k] = b[j];
//                 j++;
//                 k++;
//                 if (k == 10)
//                 break;
//             }
//         } else if(a[i]<b[j]) {
//             c[k] = a[i];
//             i++;
//         } else {
//             c[k] = b[j];
//             j++;
//         }
//     }
//     for(k=0; k<10; k++)
//     printf("%d ",c[k]);

//     return 0;
// }

/*
10. Write a function in C to count the frequency of each element of an array.
*/

// #include<stdio.h>
// int main() {
//     int arr_1[10], arr_2[] = {1,2,4,4,4,9,2},i,j, length = 7,temp;
//     for(i=0;i<10;i++) {
//         arr_1[i]=0;
//     }

//     for(i=0; i<length; i++) {
//         temp = arr_2[i];
//         arr_1[temp] = arr_1[temp] + 1;
//     }

//     for(i=0; i<10; i++) {
//         if(arr_1[i]>0) {
//             printf("Frequency of %d is %d\n",i,arr_1[i]);
//         }
        
//     }

//     return 0;
// }



/*********************************Desending order array*****************************************/
// #include<stdio.h>
// int main() {
//     int i,j,a[]={4,7,32,6},temp;

//     for(i=0;i<4;i++) {
//         for(j=i+1;j<4;j++) {
//             if(a[i]<a[j]) {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for(i=0;i<4;i++) {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }