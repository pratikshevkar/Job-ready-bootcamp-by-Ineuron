// #include<stdio.h>
// int main() {
//     int i;
//     char a[10]={'B','H','O','P','A','L'};

//     for(i=0;i<10;i++) {
//         printf("%c",a[i]);
//     }


// return 0;
// }

/*
#include<stdio.h>
int main() {
    int i;
    char a[10]={'B','H','O','P','A','L'};

    printf("%s",a);

    // for(i=0;a[i];i++) {
    //     printf("%c",a[i]);
    // }

return 0;
}
*/

// #include<stdio.h>
// int main() {
//     int i;
//     char a[10]={'B','H','O','P','A','L'};

//     for(i=0;a[i];i++) {
//         a[i]+=1;
//     }
//     printf("%s",a);

// return 0;
// }

/*
calc the length of sring
*/

// #include<stdio.h>
// int main() {
//     int i;
//     char a[10]={"BHOPAL"};

//     for(i=0;a[i];i++) {

//     }
//     if(a[i]==0) {
//         printf("%d",i);
//     }
    

// return 0;
// }

/*
Entering values in array
*/

// #include<stdio.h>
// int main() {
//     char str[20];

//     printf("Enter your name:-");
//     scanf("%s",str);
//     printf("\n%s",str);

//     return 0;
// }

/*********************************gets() function*****************************************/

// #include<stdio.h>
// int main() {
//     char str[20];

//     printf("Enter your name:-");
//     gets(str);
//     printf("\n%s",str);

//     return 0;
// }

/*********************************gets() function*****************************************/

// #include<stdio.h>
// int main() {
//     char str[20];

//     printf("Enter your name:-");
//     fgets(str,20,stdin);
//     printf("\n%s",str);

//     return 0;
// }

/******************************String Funtions************************************/
#include<string.h>
#include<stdio.h>
int main() {
    char str[20];

    printf("Enter your name:-");
    fgets(str,20,stdin);
    strupr(str);
    printf("\n%s",str);

    return 0;
}