#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// a 2D array to store the maze so that characters can be accessed by maze[][]
typedef struct __MAZE {
    char **maze; // reference: https://www.mycplus.com/tutorials/c-programming-tutorials/double-pointer-to-pointer-in-c/#:~:text=Dynamic%20Memory%20Allocation%3A%20Double%20pointers,outside%20of%20a%20function%20call.
    int col;
    int row;
} Maze;


// variables to verify if char "S" and "E" present
// (If exists then S,E= true) (Loaded successfully = both true)
bool S = false;
bool E = false;


// initiate the coordinates of the player and shd be fitted in maze[][]
int corX; // rows
int corY; // columns


void OpenMaze (char filename) {
    // reads in the file 
    // scan through the lines
    // If "S" is detected, S = true (Save Coordinates of S)
    // If "E" is detected, E = true
    // Loaded successful when (S = true and E = true)
    // if not then return error message
}

char PrintMaze () {
    // for loop
    // print the maze line by line
    // if the character (maze[][]) =  current coordinates (corX, corY)
    // then replace that (should be either "S" or " ") by "X"
    
}

bool IsPath (int x, int y) {
    // search the char in maze[][]
    // get the ASCII code of that char
    // check if it takes the correct path or hits the wall/border 

    /**
    if (ASCII = "#") {
        return false; (cannot go)
    }
    else {
        return true; (IT IS a " " or "E" or "S")
    }
    */
}

bool IsWin (int x, int y) {
    
    // Check the current position if its a "E" by ASCII
    // Yes: print congratulations and exit the game
    // No: continue the game
    
}

int main (int argc, char* argv[]) {

    // users pass the maze file through commandline
        // invalid input handling

    // open the maze
        // verify the format

    OpenMaze (filename);

    // Initiate corX and corY by coordinate of S

    PrintMaze();
    


    // Start playing the maze

    switch (input) {
        case "A":
        case "a":

            corX = corX - 1;
            if (IsPath (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went to the left!");
                IsWin (corX, corY);  // see if they have arrived "E" yet
            else {
                corX = corX + 1;
                printf("You hit the wall :(");
                }
            }
            
            break;

        case "S":
        case "s":

            corY = corY + 1;
            if (IsPath (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went down!");
                IsWin (corX, corY);  // see if they have arrived "E" yet
            else {
                corY = corY - 1;
                printf("You hit the wall :(");
                }
            }

            break;

        case "D":
        case "d":

            corX = corX + 1;
            if (IsPath (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went to the right!");
                IsWin (corX, corY);  // see if they have arrived "E" yet
            else {
                corX = corX - 1;
                printf("You hit the wall :(");
                }
            }

            break;

        case "W":
        case "w":

            corY = corY - 1;
            if (IsPath (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went up!");
                IsWin (corX, corY);  // see if they have arrived "E" yet
            else {
                corY = corY + 1;
                printf("You hit the wall :(");
                }
            }
            break;

        case "M":
        case "m":

            PrintMaze();

            break;

        default:

            // return error message "Invalid input. TIPS: <WASD for navigation> <M for map>"

            break;

    }

    return 0;
}