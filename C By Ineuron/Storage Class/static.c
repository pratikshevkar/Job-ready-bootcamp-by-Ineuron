#include<stdio.h>
static char c;
static int i;
static float f;
static char s[100];

void sum() {
    static int a= 10;
    int b = 24;
    printf("%d %d\n",a,b);
    a++;
    b++;
}

int main() {
    int i;
    printf("%d %d %f %s\n",c,i,f,s);
    for(i=0; i<3; i++) {
        sum();
    }
    
    return 0;
}