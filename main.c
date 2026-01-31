#include "header.h"

int main(void)
{
    bool game_on = true;

    
    struct board_stage board; // holds the initial structure of board
    init_board_stage(&board); // init the boards

    // main loops of game
    while(game_on)
	{
	    char c[100]; // this is a buffer
	    int num;
	    
	    draw_board(&board);
	    printf("Enter your move: ");
	    while(fgets(c, 100, stdin)) // runs until correct input has been written
		{
		    num = atoi(c);
		    if (num >= 1 && num <= 9)
			{
			    break;			    
			}

		    printf("Enter your move(digit from 1-9): ");		    
		}
	    // change stage
	    change_stage(num, &board);
	}

    
    return 0;
}


