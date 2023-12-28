/*
1. Define a function to input variable length string and store it in an array without
memory wastage
ans by sir
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     char *str, c;
//     int i=0, j=1;

//     str = (char*)malloc(sizeof(char));
//     printf("Enter string: ");

//     while (c!='\n') {
//         c= getc(stdin);
//         j++;
//         str = (char*)realloc(str, j * sizeof(char));
//         str[i] = c;
//         i++;
//     }

//     str[i] = '\n';

//     printf("entered element: %s", str);
//     free(str);
    
//     return 0;
// }


/*
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int value, i, sum=0;
//     int *ptr;

//     printf("Enter value:- ");
//     scanf("%d", &value);

//     ptr = (int*)calloc(value, sizeof(int));

//     if( ptr == NULL) {
//         printf("Memory aloocation failed");
//         return 0;
//     }
     
//      printf("Enter values in array\n");
//     for(i=0;i<value;i++) {
//         scanf("%d", (ptr+i));
//     }

//     for(i=0; i<value; i++) {
//         sum = sum + *(ptr+i);
//     }
//     printf("average = %d",(sum/value));

// return 0;
// }

/*
3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.
*/
// #include<stdio.h>
// #include<stdlib.h>
// int func(int *ptr);
// int main() {
//     int elements,i, *ptr,ans;

//     ptr = (int*)malloc(sizeof(int)*elements);
//     ans = func(ptr);
   
//     printf("%d",ans);

//     return 0;
// }
// int func(int *ptr) {
//       int elements,i,sum=0;

//      printf("How many elements you want to enter:- ");
//     scanf("%d", &elements);
//     printf("Enter elements\n");

//     for(i=0; i<elements; i++) {
//         scanf("%d", (ptr+i));
//     }

//         for(i=0; i<elements; i++) {
//         sum = sum + *(ptr+i);
//     }
//     free(ptr);
//     return sum;
// }

/*
4. Write a program to input and print text using dynamic memory allocation.
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     char *ptr;
//     ptr = (char*)calloc(30, sizeof(char));
//     printf("Enter a string\n");

//     fgets(ptr, 30, stdin);

//     printf("%s", ptr);

//     return 0;
// }

/*
5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr, i, sum=0;
//     ptr = (int*)calloc(5, sizeof(int));

//         printf("Enter elements\n");

//     for(i=0; i<2; i++) {
//         scanf("%d", (ptr+i));
//     }
//     for(i=0; i<2; i++) {
//         sum = sum + *(ptr+i);
//     }
//      for(i=0; i<2; i++) {
//         if(i==0) {
//             printf("[ ");
//         }
//         printf("%d ", *(ptr+i)); 
//     }
//             printf("]= %d",sum);
    
// return 0;
// }

/*
6. Write a program in C to find the largest element using Dynamic Memory Allocation.
*/
// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int *ptr, i,j, max, min;
//     ptr = (int*)calloc(5, sizeof(int));
//     printf("Enter elements in array\n");
//     for(i=0; i<5; i++) {
//         scanf("%d",ptr+i);
//     }
//     max = *(ptr+0);

//      for(i=0; i<5; i++) {
//             if(max < *(ptr+i)) {
//              max = *(ptr+i);
//         }
//     }

//      printf("Largest element is %d",max);
    
//     return 0;
// }

/*
7. Write a program to demonstrate memory leak in C.
*/
// #include<stdio.h>
// #include<stdlib.h>
// void leak();
// int main() {
//     leak();

//     return 0;
// }
// void leak() {
//     int *ptr;
//     ptr = (int*)malloc(sizeof(int));
// }

/*****************************ans sir*************************/

// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr;

//     ptr = (int*)malloc(sizeof(int));
//     ptr = NULL;

//     return 0;
// }

/*
8. Write a program to demonstrate dangling pointers in C.
*/
// #include<stdio.h>
// #include<stdlib.h>
// void dangling();
// int main() {

//     dangling();

//     return 0;
// }
// void dangling() {
//     int *ptr;
//     ptr = (int*)malloc(sizeof(int));
//     free(ptr);
//     *ptr = 10;
// }

/**********************************ans by sir*******************************************/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr;

//     ptr = (int*)malloc(sizeof(int));
//     *ptr = 10;

//     printf("Before free %d\n", *ptr);
//     free(ptr);

//     printf("after free %d", *ptr);

//     return 0;
// }

/*
9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int bytes;

//     printf("how many bytes do you want to allocate:- ");
//     scanf("%d", &bytes);
//     if(bytes % 4==0 || bytes % 8==0) {
//         malloc(bytes);
//         printf("Memory allocated");
//     } else {
//         printf("your entered byte size isn't suitable");
//     }
    
//     return 0;
// }

/**************************************Ans by sir**************************************/
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int bytes, *ptr;

//     printf("how many bytes do you want to allocate:- ");
//     scanf("%d", &bytes);

//        ptr = (int*)malloc(bytes);
//             if( ptr == NULL) {
//         printf("Memory aloocation failed");
//         return 0;
//     } else {
//         printf("Memory aloocation successesful");

//     }

//     return 0;
// }


/*
10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.
*/
// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int *ptr, i,j, max, min;
//     ptr = (int*)calloc(5, sizeof(int));
//     printf("Enter elements in array\n");
//     for(i=0; i<5; i++) {
//         scanf("%d",ptr+i);
//     }
//     min = max = *(ptr+0);

//      for(i=0; i<5; i++) {
//             if(max < *(ptr+i)) {
//              max = *(ptr+i);
//         }
//     }
//     for(i=0; i<5; i++) {
//             if(min > *(ptr+i)) {
//              min = *(ptr+i);
//         }
//     }

//      printf("Maximum element %d & Minimum element %d ",max, min);
    
//     return 0;
// }