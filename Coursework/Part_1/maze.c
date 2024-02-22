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


// ***** counter for char "S" "E" only one should be 


// initiate the coordinates of the player and shd be fitted in maze[][]
int corX = 0; // rows
int corY = 0; // columns


void OpenMaze (char filename) {
    // reads in the file 
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
    // No: break;
    
}

char PrintMaze () {

}


int main (int argc, char* argv[]) {

    // users pass the maze file through commandline
        // invalid input handling

    // open the maze
        // verify the format

    OpenMaze (filename);

    // locate the "S"
    // Place the "X" on "S"

    PrintMaze();
    


    // Start playing the maze

    switch (input) {
        case "A":
        case "a":

            corX = corX - 1;
            if (Compare (corX, corY)) {
                Win (corX, corY);
            } 
            printf("Movement recorded.");

            break;

        case "S":
        case "s":

            corY = corY + 1;
            if (Compare (corX, corY)) {
                Win (corX, corY);
            }
            printf("Movement recorded.");

            break;

        case "D":
        case "d":

            corX = corX + 1;
            if (Compare (corX, corY)) {
                Win (corX, corY);
            }
            printf("Movement recorded.");

            break;

        case "W":
        case "w":

            corY = corY - 1;
            if (Compare (corX, corY)) {
                Win (corX, corY);
            }
            printf("Movement recorded.");

            break;

        case "M":
        case "m":

            for (int i= 0; i < sizeof(maze[0]); i++) {
                // print the maze line by line
                // if the char (maze[][]) =  current coordinates (corX, corY)
                // then replace " " by "X"
            }

            break;

        default:

            // return error message "Invalid input. TIPS: <WASD for navigation> <M for map>"

            break;

    }

    return 0;
}