#include<stdio.h>
int main() {
    int z;
    printf("Enter a number:- ");
    scanf("%d",&z);
    switch(z) {
        case 5:
        printf("raj");
        break;
        case 7:
        printf("rajvini");
        break;
        case 10:
        printf("rajashree");
        break;
        default:
        printf("Invalid");

    }
    return 0;
}