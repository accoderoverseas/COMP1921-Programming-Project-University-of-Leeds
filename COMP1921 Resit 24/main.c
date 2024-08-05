/**
 * @file main.c
 * @author your name
 *
 */

// You may include more built-in C libraries if needed
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// This is the header for this file - it contains the struct and function definitions.
#include "main.h"


// FUNCTIONS - you can use these as-is, totally remove them and write your own,
// or change them to suit your own development preference if you wish.


/**
 * Reads in the data from the map file and stores it into the Map struct passed from main.
 * Should ensure you validate the Map is valid.
 * return should indicate whether this was successful or not.
 */
int read_file(Map *island, FILE *file)
{

}

/**
 * This is a utility function which will strip the newline off the end of a string.
 * You may find this useful when reading in the file or getting user inputs.
 */
void strip_newline(char *str)
{
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

/**
 * Prints the map in the expected format - if you want to re-write this please
 * ensure you follow this exact format as it will be used in testing.
 */
void print_map(Map *island, Player *player)
{
    for (int i = 0; i < island->size; i++)
    {
        for (int j = 0; j < island->size; j++)
        {
            // player printed as 'X'
            if (player->currentPosition.x == j && player->currentPosition.y == i)
            {
                printf("X");
            }
            // treasure and start point are shown as ' 's
            else if (island->map[i][j] == 'H' || island->map[i][j] == 'S')
            {
                printf(" ");
            }
            // trees or water shown as 'T'/'w' as appropriate.
            else
            {
                printf("%c", island->map[i][j]);
            }
        }
        printf("\n");
    }
}


/**
 * check that the player's intended move is legal and then moves
 * their position if necessary.
 */
int move(char direction, Player* player, Map* island)
{

}


/**
 * check if the player has won - useful for loop control.
 */
int has_won(Player* player)
{

}

/**
 * dynamically allocate the array for island->map so you can use the array
 */
int allocate_map(Map* island)
{

}


/**
 * free all the dynamically allocated memory for the array - use before exits. 
 */
void free_map(Map* island)
{

}


int main(int argc, char *argv[])
{

    // arg checks

    // Creating pointers to a Map and a Player which can be passed by reference to other functions.
    Map* island = malloc(sizeof(Map));
    Player* player = malloc(sizeof(Player));

    // allocate memory for the array

    // open file

    // read file

    // close file

    // play the game

    // exit
    free_map(island);
    return EXIT_SUCCESS;

}