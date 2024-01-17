#include<stdio.h>
int main() {
    char playerName[10];
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, rows, columns;

    // printf("Enter Player Name:- ");
    // gets(playerName);
    
    // printf("MATRIX PUZZLE");
    // printf("\033[0;31m");
    // printf("RULE OF THIS GAME");
    // printf("1. You can move only 1 step at a time by arrow key");

    // printf("\033[0;37m");
    // printf("Move Up : by Up arrow key");
    // printf("Move Down : by Down arrow key");
    // printf("Move Left : by Left arrow key");
    // printf("Move Right : by Right arrow key");
    // printf("\033[0;31m");
    // printf("2. You can move number at empty position only");
    // printf("3. For each valid move : your total number of move will decrease by 1");
    // printf("4.Winning situation : Number in 4*4 matrix should be in order from 1 to 15");
    // printf("winning situation:\n");

    for(rows=0; rows<4; rows++) {
        for(columns = 0; columns<4; columns++) {
            if(arr[rows][columns] == 0) {
                printf(" ");
            } else {
                printf("%d  ",arr[rows][columns]);
            }
            
             
        }
        printf("\n");
    }
     
    



    return 0;
}