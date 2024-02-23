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


// variables to count char "S" "E" 
int S = 0;
int E = 0;


// initiate the coordinates of the player and shd be fitted in maze[][]
int corX = 0; // rows
int corY = 0; // columns


void OpenMaze (char filename) {
    // reads in the file 
    // scan through the lines
    // If "S" is detected, S++
    // If "E" is detected, E++
    // Loaded successful when (S = 1 and E = 1)
    // if not then return error message
}

char PrintMaze () {
    // for loop
    // print the maze line by line
    // if the character (maze[][]) =  current coordinates (corX, corY)
    // then replace that (should be either "S" or " ") by "X"
    
}

bool Compare (int x, int y) {
    // search the char in maze[][]
    // get the ASCII code of that char
    // compare

    /**
    if (ASCII = "X") {
        return false; (cannot go)
    }
    else {
        return true; (IT IS a " " or "W" or "S")
    }
    */
}

bool Win (int x, int y) {
    
    // Check if its a "W" by ASCII
    // Yes: print congratulations and exit the game
    // No: continue the game
    
}

int main (int argc, char* argv[]) {

    // users pass the maze file through commandline
        // invalid input handling

    // open the maze
        // verify the format

    OpenMaze (filename);

    PrintMaze();
    


    // Start playing the maze

    switch (input) {
        case "A":
        case "a":

            corX = corX - 1;
            if (Compare (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went to the left!");
                Win (corX, corY);  // see if they have arrived "E" yet
            else {
                corX = corX + 1;
                printf("You hit the wall :(");
                }
            }
            
            break;

        case "S":
        case "s":

            corY = corY + 1;
            if (Compare (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went down!");
                Win (corX, corY);  // see if they have arrived "E" yet
            else {
                corY = corY - 1;
                printf("You hit the wall :(");
                }
            }

            break;

        case "D":
        case "d":

            corX = corX + 1;
            if (Compare (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went to the right!");
                Win (corX, corY);  // see if they have arrived "E" yet
            else {
                corX = corX - 1;
                printf("You hit the wall :(");
                }
            }

            break;

        case "W":
        case "w":

            corY = corY - 1;
            if (Compare (corX, corY)) {  // Bool function return true if player move into " "
                printf("You went up!");
                Win (corX, corY);  // see if they have arrived "E" yet
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