/*
1. Write a function to swap values of two in variables of calling function. (TSRS)
*/
// void swap(int *, int *);
// #include<stdio.h>
// int main() {
//     int a=10, b=5;
//     swap(&a, &b);
//     printf("a = %d and b = %d", a,b);
//     return 0;
// }
// void swap(int *ptr, int *ptr1) {
//     int temp;
//     temp = *ptr;
//     *ptr = *ptr1;
//     *ptr1 = temp;
// }

/*
2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
ans by sir
*/
// #include<stdio.h>

// void swap(char **x, char **y) {
//     char *temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     char a[20], b[20];
//     char *ptr_a = a;
//     char *ptr_b = b;
//     printf("Enter string\n");
//     gets(a);
//     gets(b);

//     swap(&ptr_a, &ptr_b);
//     printf("%s\n", a);
//     printf("%s", b);

//     return 0;
// }


/*
3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
*/
// #include<stdio.h>
// void sort(int *ptr,int size);
// int main() {
//     int a[5] = {5, 6, 10, 7, 15}, size=5;
//     sort(a,size);
//     return 0;
// }
// void sort(int *ptr,int size) {
//     int i, temp,j;
//     for(i=0; i<size; i++) {
//         for(j=0; j<size; j++) {
//         if(*(ptr+i) > *(ptr+j)){
//         temp = *(ptr+i); 
//         *(ptr+i) = *(ptr+j);  
//         *(ptr+j)= temp; 

//         }

//        }
//     }

//     for(i=0; i<size; i++)
//     printf("%d ",*(ptr+i));
// }

/*
4. Write a program in C to demonstrate how to handle the pointers in the program.
*/
// #include<stdio.h>
// int main() {
//     int a=10, *ptr = &a;
//     char ch='a', *ptr2 = &ch;

//     printf("value of variable a is %d and its address is %p\n", a, &a);
//     printf("value of variable a is %c and its address is %p \n", ch, &ch);

//     printf("value of variable a is %d and its address is %p\n", *ptr, ptr);
//     printf("value of variable a is %c and its address is %p\n", *ptr2, ptr2);

//     printf("Address of pointer 1 %p and of pointer 2 %p", &ptr, &ptr2);
//     return 0;
// }

/*
5. Write a program to find the maximum number between two numbers using a pointer
*/
// #include<stdio.h>
// int main() {
//     int a=5, b=10, *first = &a, *second = &b;
//     if(*first > *second) {
//         printf("%d", *first);
//     } else {
//         printf("%d", *second);
//     }
//     return 0;
// }

/*
6. Write a program to calculate the length of the string using a pointer
*/
// #include<stdio.h>
// int main() {
//     int i;
//     char str[] = "Sham", *ptr = str;
//     for(i=0; *(ptr+i); i++);
//     printf("%d",i);

//     return 0;
// }

/*
7. Write a program to count the number of vowels and consonants in a string using a
pointer.
*/

// #include<stdio.h>
// int main() {
//     char str[] = "shravasti", *ptr = str;
//     int i, size = 9, vowel=0, consonant=0;
//     for(i=0; i<size; i++) {
//         if(*(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) == 'i' || *(ptr+i) == 'o' || *(ptr+i) == 'u') {
//             vowel++;
//         } else {
//             consonant++;
//         }
//     }

//     printf("Vowels are %d and Consonant are %d",vowel, consonant);

// return 0;
// }

/*
8. Write a program to compute the sum of all elements in an array using pointers.
*/
// #include<stdio.h>
// int main() {
//     int arr[] = {5, 3, 9, 7, 6}, *ptr = arr,i, size = 5,sum =0;
//     for(i=0; i<size; i++) {
//         sum = sum + *(ptr + i);
//     }
//     printf("Sum of array %d", sum);

//     return 0;
// }

/*
9. Write a program to print the elements of an array in reverse order.
*/
// #include<stdio.h>
// int main() {
//     int a[] = {10, 20, 30, 40}, i;
//     int *ptr = a;

//     for(i=3; i>=0; i--) {
//         printf("%d ", *(ptr+i));
//     }

//     return 0;
// }

/*
10. Write a program to print a string in reverse using a pointer
*/

// #include<stdio.h>
// int main() {
//     int i;
//     char str[] = "Shriniti";
//     char *ptr = str;

//     for(i=7; i>=0; i--) {
//         printf("%c", *(ptr+i));
//     }

//     return 0;
// }