#include<stdio.h>
#include<string.h>
int main() {
    int i,temp,j;
    char str[30]="Pranam";
    strupr(str);
    for(i=0;str[i];i++) {
        for(j=i+1;str[j];j++) {
              if(str[i] > str[j]) {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        }
    }

    printf("%s",str);

return 0;
}