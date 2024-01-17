#include<stdio.h>
#define LIMIT 5

//Function like macro
#define AREA(l,b) (l*b)
#define MIN(a,b) (((a) < (b)) ? (a):(b))

// Chain Macro
#define YOUTUBE FOLLOWERS
#define FOLLOWERS 776

int main() {
    printf("The value of LIMIT is %d\n", LIMIT);

    int area = AREA(2, 4);
    printf("Area of rectangle is: %d\n", area);

    printf("Minimum value between %d and %d is %d\n",5,10, MIN(5,10));
    printf("MySirG have %d k followers on Youtube", YOUTUBE);

    return 0;
}