#include<stdio.h>
int main() {
    int i = 0, count = 1;
    char str[] = {"Jam board"};
    while (str[i] != '\0')
    {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i] != ' '){
            count++;
        }
        i++;
    }
    printf("%d", count);
    
return 0;
}