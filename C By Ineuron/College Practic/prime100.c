#include<stdio.h>
int main() {
    int n,i,j,c=0;
    printf("Enter a number:- ");
    scanf("%d",&n);

    for(i=2;i<=5; i++) {
       for(j=1;j<5;j++) {
        if(i%j==0) {
            c++;
       }
    }
      if(c==2) {
            printf("%d ", i);
        }
        c=0;

    }            

    return 0;
}