/*
Q1. Write a program which ask user to enter an even number computer will give user at most 3 chance,
 if user failed to answer in any of the chance, "Game Over" message should be displayed on the screen,
otherwise "You Win" message should be displayed and game stopped immediately.
*/
// #include<stdio.h>
// int main() {
//     int a,b;

//     /*Using while loop*/
    
//     // while(b<3) {
//     //     printf("Enter a even number:-");
//     //     scanf("%d",&a);
//     //     if(a%2==0){
//     //         printf("You Win");
//     //         break;
//     //     } 
//     //          b++;
//     // }

//     /*Using for loop*/

//     for(b=0; b<3; b++) {
//      printf("Enter a even number:-");
//         scanf("%d",&a);
//         if(a%2==0){
//             printf("You Win");
//             break;
//         } 
// }

//     if (a%2!=0)
//     {
//         printf("Game Over");
//     }
    
//     return 0;
// }


// /*Answer by sir*/

// #include<stdio.h>
// int main() {
//     int a,b;

//      for(b=0; b<3; b++) {
//      printf("Enter a even number:-");
//         scanf("%d",&a);
//         if(a%2==0)
//             break;
// }
// if(b==4) {
//     printf("Game over, gadhe");
// } else {
//     printf("You Win");
// }
// return 0;
// }

/*
Q2. Write a program to add numbers enteres by user. User can enter any number of numbers until he enter 0.
*/

#include<stdio.h>
int main() {
    int a=1,i,b=0;

    for(i=1; a>0 ; i++) {
        printf("Enter a number:- ");
        scanf("%d",&a);
        b=a+b;
        
    }
    printf("Total sum is %d\n",b);

    return 0;
}

/* Sir answer*/

#include<stdio.h>
int main() {
    int x,s=0;
    
    do {
        printf("Enter a number:- ");
        scanf("%d",&x);
        s=s+x;
    } while(x);
    printf("Sun is %d",s);

    return 0;
}