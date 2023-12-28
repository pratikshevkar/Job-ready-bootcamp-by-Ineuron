#include<stdio.h>
#include<stdlib.h>

int main() {
    while(1) {
    int a,b,c;
    printf("Select your choice:- ");
    printf("\n 1. Addition");
    printf("\n 2. Substraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Exit\n");
    scanf("%d",&a);

    switch(a) {
        case 1:
        printf("Enter two numbers:- ");
        scanf("%d %d",&b,&c);
        printf("Sum is %d\n",b+c);
        break;

        case 2:
        printf("Enter two numbers:- ");
        scanf("%d%d",&b,&c);
        printf("Diffrence is %d\n",b-c);
        break;

        case 3:
        printf("Enter two numbers:- ");
        scanf("%d%d",&b,&c);
        printf("Multiplication is %d\n",b*c);
        break;

        case 4:
        printf("Enter two numbers:- ");
        scanf("%d%d",&b,&c);
        printf("Division is %d\n",b/c);
        break;

        case 5:
        exit(0);

        case 6:
        printf("Invalid choice");

    }
    }
    return 0;
}