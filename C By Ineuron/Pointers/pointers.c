#include<stdio.h>
#include<string.h>
int main() {
    char *add;
    char firsts[10] = "Sham" ,secs[10];
    add = strcpy(secs, firsts);
    printf("%c",*add);

    return 0;
}

