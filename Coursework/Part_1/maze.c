#include <stdio.h>
#include <stdlib.h>

void OpenMaze (char filename) {
    
}



int main (int argc, char* argv[]) {

    // users pass the maze file through commandline

    OpenMaze (filename);


    // Start playing the maze

    switch (input) {
        case "A":
        case "a":

            // Going to the left

            break;

        case "S":
        case "s":

            // Going down

            break;

        case "D":
        case "d":

            // Going to the right

            break;

        case "W":
        case "w":

            // Going up

            break;

        case "M":
        case "m":

            // Open the map

            break;

        default:

            // return error message "Invalid input. TIPS: <WASD for navigation> <M for map>"
            break;

    }

    return 0;
}