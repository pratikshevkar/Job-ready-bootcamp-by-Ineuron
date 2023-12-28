/*
1. Write a program to calculate the length of the string. (without using built-in method)
*/

// #include<stdio.h>

// int main() {
//     int i;
//     char str[] = "Sham";
//     for(i=0; str[i]; i++);
//     printf("length is:- %d",i);

//     return 0;
// }

/************************************************Ans By Sir*************************************************/

// #include<stdio.h>
// int main() {
//     char a[] = "Pratik";
//     int i= 0, count =0;

//     while (a[i] != '\0')
//     {
//         i++;
//         count++;
//     }
//     printf("%d ", count);
    
// return 0;
// }

/*
2. Write a program to count the occurrence of a given character in a given string.
*/
// #include<stdio.h>
// int main() {
//     static int flag;
//     int i;
//     char str[30],ch;
//     printf("Enter a string:-\n");
//     fgets(str,30,stdin);
//     printf("Occurance word:- ");
//     scanf("%c",&ch);
//     for(i=0;str[i];i++) {
//         if(str[i]==ch) {
//             flag++;
//         }
//     }
//     printf("Occurance of %c is %d times",ch,flag);

//     return 0;
// }

/*
3. Write a program to count vowels in a given string
*/

// #include<stdio.h>
// int main () {
//     static int flag;
//     char str[]="prateek";
//     int i;
//     for(i=0;str[i];i++) {
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
//             flag++;
//         }
//     }
//     printf("vowels are:- %d",flag);

//     return 0;
// }

/*
4. Write a program to convert a given string into uppercase 
*/
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[30]="Shravasti";
//     strupr(str);
//     printf("%s",str);
  
// return 0;
// }

/**************************************Ans By Sir**********************************************/

// #include<stdio.h>
// int main() {
//     char a[] = "Pratik";
//     int i= 0;

//     while (a[i] != '\0')
//     {
//         if(a[i]>= 'a' && a[i]<='z') {
//             a[i] = a[i] -32;
//         }
//         i++;
//     }
//     printf("%s ", a);
    
// return 0;
// }


/*
5. Write a program to convert a given string into lowercase
*/

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[30]="SHRAVASTI";
//     strlwr(str);
//     printf("%s",str);
  
// return 0;
// }

/*
6. Write a program to reverse a string. 
*/

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[30]="shravasti";
//     strrev(str);
//     printf("%s",str);
  
// return 0;
// }

/**************************************Ans By Sir**********************************************/

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char a[] = "Pratik";
//     int i = 0, j= strlen(a)-1, t;

//     while(i<=j) {
//         t=a[i];
//         a[i] = a[j];
//         a[j] = t;
//         i++;
//         j--;
//     }
//     printf("%s", a);

//     return 0;
// }

/*
7. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.
*/

// #include<stdio.h>
// int main() {
//     static int alphabet, digit, spechar;
//     int i;
//     char str[30] =  "adaAEDA@)5363";
//     for(i=0;str[i];i++) {
//         if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
//             alphabet++;
//         } else if(str[i] >= '0' && str[i] <= '9') {
//             digit++;
//         } else {
//             spechar++;
//         }
//     }
//     printf("Total aplphabates:- %d\n",alphabet);
//     printf("Total dits:- %d\n",digit);
//     printf("Total special character:- %d\n",spechar);


//     return 0;
// }

/*
8. Write a program in C to copy one string to another string.(you can do this by b[i] = a[i])
*/
// #include<string.h>
// #include<stdio.h>
// int main() {
//     char str1[30] = "Shivani", str1cp[30];
//     strcpy(str1cp, str1);
//     printf("%s",str1cp);

//     return 0;
// }

/*
9. Write a C program to sort a string array in ascending order.
*/

// #include<stdio.h>
// #include<string.h>
// int main() {
//     int i,temp,j;
//     char str[30]="Pranam";
//     strupr(str);
//     for(i=0;str[i];i++) {
//         for(j=i+1;str[j];j++) {
//               if(str[i] > str[j]) {
//             temp=str[i];
//             str[i]=str[j];
//             str[j]=temp;
//         }
//         }
//     }

//     printf("%s",str);

// return 0;
// }

/*
10. Write a program in C to Find the Frequency of Characters
ans by sir
*/

// #include<stdio.h>
// int main() {
//     char a[] = "prateek";
//     int freq[150] = {0};
//     int i = 0;

//     while (a[i] != '\0')
//     {
//         freq[a[i]]++;
//         i++;
//     }
//     for(i=0; i<150; i++) {
//         if(freq[i] !=0){
//             printf("%c ==> %d\n", i, freq[i]);
//         }
//     }

// return 0;
// }