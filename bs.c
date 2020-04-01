/* Author: Joachim Larsen Mathisen
* This is a very, very simple version of Battleship. 
* I am doing this as a way to teach my self C.
* 
* Rules:
* 1) There is a board with coordinates
* 2) A ship is hidden on some of the coordinates
* 3) A player must guess a coordinate and try to sink the ship
*/

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

char **setBoard();
char **drawBoard();

int main(void)
{
    /* code */
    // Draw the board:
    setBoard();
    return 0;
}

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

char **setBoard()
{
    // set size of the board
    int gridRows = 10;
    int gridCols = 10;

    clearScreen();

    int i,j;
    for(i = 0; i < gridRows; i++){
        printf("\n");
        for(j = 0; j < gridCols; j++){
            printf("#");
        }
    }    
    printf("\n");

}