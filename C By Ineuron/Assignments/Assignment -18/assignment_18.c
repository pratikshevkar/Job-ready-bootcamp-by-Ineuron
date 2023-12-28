/*
1. Write a function to calculate length of the string 
*/
// #include<stdio.h>
// #include<string.h> 
// int length(char str1[]);
// int main() {
//     int anslen;
//     char str[30]="Shamini";
//     anslen = length(str);
//     printf("%d",anslen);

// return 0;
// }
// int length(char str1[]) {
//     return strlen(str1);
// }

/*
2. Write a function to reverse a string.
*/
// #include<stdio.h>
// #include<string.h>
// void rev(char str1[]);
// int main() {
//     char str[30] = "simp";
//     rev(str);
// }
// void rev(char str1[]) {
//     strrev(str1);
//     printf("%s",str1);
// }

/*
3. Write a function to compare two strings.
*/

// #include<stdio.h>
// #include<string.h>
// int comp(char str[], char str1[]);
// int main() {
//     float ans;
//     char str[30]="sham", str1[20]="sham";
//     ans = comp(str, str1);
//     printf("%.0f",ans);

//     return 0;
// }
// int comp(char str[], char str1[]) {
//     return strcmp(str, str1);
// }

/*
4. Write a function to transform string into uppercase
*/

// #include<stdio.h>
// #include<string.h>
// void rev(char str1[]);
// int main() {
//     char str[30] = "simp";
//     rev(str);
// }
// void rev(char str1[]) {
//     strupr(str1);
//     printf("%s",str1);
// }

/*
5. Write a function to transform a string into lowercase 
*/

// #include<stdio.h>
// #include<string.h>
// void rev(char str1[]);
// int main() {
//     char str[30] = "SIMP";
//     rev(str);
// }
// void rev(char str1[]) {
//     strlwr(str1);
//     printf("%s",str1);
// }

/*
6. Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)
*/

// #include<stdio.h>
// void alpnum(char str[]);
// int main() {
//     char str[20] = "sirn";
//     alpnum(str);

//     return 0;
// }

// void alpnum(char str[]) {
//     static int alpha, num;
//     int i;
//     for(i=0;str[i];i++) {
//         if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
//             alpha++;
//         } else if (str[i] >= '0' && str[i] <= '9') {
//             num++;
//         }
//     }

//     if(alpha > 0 && num > 0) {
//         printf("Given is alphanumric");
//     } else {
//         printf("Given is not alphanumric");
//     }

// }

/*
7. Write a function to check whether a given string is palindrome or not.
*/

// #include<stdio.h>
// #include<string.h>
// float pali(char str1[]);
// int main() {
//     float final;
//     char str[30]="mon";
//     final = pali(str);
//     if(final==0) {
//         printf("Given string is palindrome");
//     } else {
//         printf("Given string is not palindrome");
//     }

// return 0;
// }
// float pali(char str1[]) {
//     char new[30];
//     strcpy(new,str1);
//     strrev(new);
//     return strcmp(str1, new);
// }

/*
8. Write a function to count words in a given string
*/

// void count(char str[]);
// #include<stdio.h>
// int main() {
//     char str[] = "Pune";
//     count(str);

//     return 0;
// }
// void count(char str[]) {
//     int i= 0, count =0;
//     while (str[i] != '\0') {
//         i++;
//         count++;
//     }
//     printf("%d ", count);

// }

/***********************************Ans by sir*************************************/

// #include<stdio.h>
// int main() {
//     int i = 0, count = 1;
//     char str[] = {"Jam board"};
//     while (str[i] != '\0')
//     {
//         if(str[i] == ' ' && str[i+1] != ' '){
//             count++;
//         }
//         i++;
//     }
//     printf("%d", count);
    
// return 0;
// }


/*
9. Write a function to reverse a string word wise. (For example if the given string is 
“Mysirg Education Services” then the resulting string should be “Services Education 
Mysirg” ) 
*/

// #include<stdio.h>
// void swap(char a[], int i, int j) {
//     char temp;
//     while(i<=j) {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
// }
// int main() {
//     char a[20] = " my name is prateek";
//     int i=0, start = 0, end=0, flag= 0;
//     while(a[i] != '\0') {
//         while(a[i] != ' ') {
//             if(a[i] == '\0') {
//                 flag = 1;
//                 break;
//             }
//             end++;
//             i++;
//         }
//         swap(a, start, end-1);
//         if(flag == 1)
//             break;
//         start = end++;
//         i++;
//     }

//     swap(a,0,i-1);
//     printf("%s",a);

//     return 0;
// }

/*
10.  Write a function to find the repeated character in a given string. 
*/
// #include<stdio.h>
// int main() {
//     int i,j;
//     char str[30] = "HAHAHA",charec;
//     for(i=0;str[i];i++) {
//         for(j=i+1;str[j];j++) {
//             if(str[i] == str[j]) {
//                 charec = str[i];
//             }
//         }
//         printf("%c", charec);
//     }

//     return 0;
// }