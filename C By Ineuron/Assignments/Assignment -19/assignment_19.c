/*
1. Write a program to find the number of vowels in each of the 5 strings stored in two 
dimensional arrays, taken from the user.
*/

// #include<string.h>
// #include<stdio.h>
// int main() {
//     int i,j,num=0;
//     char str[5][20];
//     printf("Enter five strings\n");
//     for(i=0;i<5;i++)
//     fgets(str[i], 20,stdin);

//     for(i=0;i<5;i++)
//     strlwr(str[i]);

//     for(i=0;i<5;i++) {
//         for(j=0; str[i][j] != '\0';j++) {
//             if(str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' ||str[i][j] == 'o' || str[i][j] == 'u' ) {
//                 num++;
//             }
//         }
//         printf("No. of vowels in string %d is %d\n",(i+1),num);
//         num = 0;
//     }
//     return 0;
// }

/*
2. Write a program to sort 10 city names stored in two dimensional arrays, taken from 
the user.
*/

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char a[10][20],t[20];
//     int i,j;

//     for(i=0; i<3; i++) {
//         gets(a[i]);
//     }
//     for(i=0; i<2;i++) {
//         for(j=i+1; j<3; j++) {
//             if(strcmp(a[i],a[j]) > 0) {
//                 strcpy(t, a[i]);
//                 strcpy(a[i],a[j]);
//                 strcpy(a[j],t);
//             }
//         }
//     }
//     for(i=0; i<3; i++) {
//         printf("%s\n",a[i]);
//     }

//     return 0;
// }

/*
3. Write a program to read and display a 2D array of strings in C language.
 */
// #include<stdio.h>
// int main() {
//     char str[30][30];
//     int i,n;
//     printf("How many city name wanna enter:- ");
//     scanf("%d",&n);
//     printf("Enter city name:-\n");
//     for(i=0;i<=n;i++) {
//         fgets(str[i],30,stdin);
//     }
//     printf("Your enterd name are:-");
//     for(i=0;i<=n;i++) {
//     printf("%s ",str[i]);
//     }


//     return 0;
// }

/*
4. Write a program to search a string in the list of strings.
do ahain usinf strcmp =0 means found 
*/

// #include<string.h>
// #include<stdio.h>
// int main() {
//     int i,j,num=0,length;
//     char str[5][20] = {"pune", "nashik", "mumbai", "bhopal", "nagpur"}, ser[20];

//     printf("Enter element want to search:- ");
//     fgets(ser,10,stdin);
 
//     length = strlen(ser);
   
//     for(i=0;i<5;i++) {
//         for(j=0;j<=length;j++) {
//             if(str[i][j]==ser[j]) {
//                 num++;
//             }
//         }
//         if(length == num) {
//             printf("Found");
//             break;
//         }
//         num = 0;
//         if(i==4) {
//             printf("Not found");
//         }
//     }

//     return 0;
// }

/*
5. Suppose we have a list of email addresses, check whether all email addresses have 
‘@’ in it. Print the odd email out. 
*/
// #include<stdio.h>
// int main() {
//     int i,j,nume = 1;
//     char str[5][10] = {"fa","fs@","afef@","afe@","efq"};

// for(i=0;i<5;i++) {
//         for(j=0;j<10;j++) {
//             if(str[i][j] == '@') {
//                 nume = 0;
//                 continue;
//             }
//         } 
//         if(nume !=0) {
//              printf("%s ", str[i]);
//         }
//         nume = 1;
// }

// return 0;
// }

/*********************************************Ans By Sir************************************************/

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[3][10];
//     int i, j;

//     for(i=0; i<3; i++) {
//         gets(str[i]);
//     }
//     for(i=0; i<3; i++ ) {
//          if(strchr (str[i], '@') == 0) {
//             printf("%s\n", str[i]);
//     }
//     }

//     return 0;
// }



/*
6. Write a program to print the strings which are palindrome in the list of strings.
*/
//FIXME:

#include<stdio.h>
#include<string.h>
int main() {
    char str[3][20] = {"rader", "raj", "sharma"};
    int i,j;

    for(i=0, j=4; i<4, j>0; i++, j-- ) {
        if(str[i] != str[j]) {
            break;
        }

    }

return 0;
}



/*
7. From the list of IP addresses, check whether all ip addresses are valid.
*/

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main() {
//     int flag=0;
//     char ip[] = "23.134.12.13";
//     char *a = strtok(ip, ".");
//     while(a != NULL) {
//         int x = atoi(a);
//         if((x>=0) && (x <= 255)) {
//             flag++;
//             a = strtok(NULL, ".");
//         } else {
//             printf("Not A Valid IP ");
//             break;
//         }
//     }
//     if(flag == 4) {
//         printf("Valid IP ");
//     }
    

//     return 0;
// }

/*
8. Given a list of words followed by two words, the task is to find the minimum distance 
between the given two words in the list of words.  
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} 
      word1 = “the”, word2 = “fox”, OUTPUT : 1 )
*/

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main() {
//     char words[4][20] = {"my", "name", "is", "prateek"};
//     char word1[] = "my";
//     char word2[] = "prateek";
//     int i, w1= -1, w2= -1, min = 10000, temp;

//     for(i=0; i<4; i++) {
//         if(strcmp(words[i], word1) == 0)
//         w1 = i;
//         if(strcmp(words[i], word2) == 0)
//         w2 = i;

//         if(w1 != -1 && w2 != -1)
//         temp = abs(w2-w1);
//         if(temp < min) {
//             min = temp;
//         }
//     }

//     printf(" Distance is %d", (min-1));

//     return 0;
// }

/*
9. Write a program that asks the user to enter a username. If the username entered is 
one of the names in the  list then the user is allowed to calculate the factorial of a 
number. Otherwise, an error message is displayed 
*/

// #include<string.h>
// #include<stdio.h>
// void factcount();
// int main() {
//     int i,j,num=0,length;
//     char str[5][20] = {"prash", "angz", "devz", "itaak", "nari"}, ser[20];

//     printf("Enter username:- ");
//     fgets(ser,10,stdin);
 
//     length = strlen(ser);
   
//     for(i=0;i<5;i++) {
//         for(j=0;j<=length;j++) {
//             if(str[i][j]==ser[j]) {
//                 num++;
//             }
//         }
//         if(length == num) {
//             // printf("Found");
//             factcount();
//             break;
//         }
//         num = 0;
//         if(i==4) {
//             printf("Incorrect username");
//         }
//     }
//     return 0;
// }

// void factcount() {
//         int num, i, ans=1;
//         printf("Congratulations!!! \nYour username match you are allowed\n");
//         printf("Enter number to find factorial:- ");
//         scanf("%d",&num);
//         // for(i=1; i<= num; i++) {
//         //     ans = i * ans;
//         // }
//         while (num != 1)
//         {
//             ans = num * ans;
//             num--;
//         }
        
//         printf("Factorial is %d", ans);
//     }

/*
10. Create an authentication system. It should be menu driven.
*/


// #include<stdio.h>
// #include<string.h>
// #include <windows.h>
// #include<mmsystem.h>

// int main() {
//     int i, flag=0, n;
//     char user[3][10] = {"s", "wwik", "prash"}, password[3][10] = {"s", "ww@ik", "p75rash#"}, enuser[10], epassword[10];
//     printf("**************************Select You Choicess*******************\n");
//     printf("1. Enter The Program\n");
//     printf("2. Exit The Program\n");
//     scanf("%d",&n);
    
//     fflush(stdin);

//     switch (n)
//     {
//     case 1:
//         printf("Enter your username:- ");
//     gets(enuser);

//     printf("Enter your password:- ");
//     gets(epassword);

//     for(i=0; i<3; i++) {
//         if (strcmp(enuser, user[i]) == 0 && strcmp(epassword, password[i]) == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 1) {
//         printf("Access Granted");
//         PlaySound(TEXT("D:\\C Language\\ineuron\\Play sound in c\\Audio Files\\access-granted-7.wav"), NULL, SND_SYNC);
//     } else {
//         printf("Access Denied");
//         PlaySound(TEXT("D:\\C Language\\ineuron\\Play sound in c\\Audio Files\\access-denied-2.wav"), NULL, SND_SYNC);
//     }

//         break;
    
//     case 2:
//     printf("Exited The Program");
//     break;
    
//     default:
//     printf("Invalid Choice Entered");
//         break;
//     }
    
    
// return 0;
// }

/*********************************************Ans By Sir********************************************/
// #include<stdio.h>
// #include<string.h>

// int main() {
//     int i, flag = 0;
//     char a[3][2][20] = { {"prateek", "123"}, {"ramzi", "463"}, {"sulini", "1#25"} };

//     char username[] = "prateek";
//     char password[] ="123";

//     for( i=0; i<3; i++) {
//         if(strcmp(username,a[i][0]) == 0 && strcmp(password, a[i][1]) == 0) {
//             printf("Login Successful");
//             flag = 1;
//         }
//     }
//     if(flag == 0) {
//         printf("Not found");
//     }

//     return 0;
// }