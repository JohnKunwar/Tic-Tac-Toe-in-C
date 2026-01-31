#include "header.h"


// set all the value in board to 0
void init_board_stage(struct board_stage *board)
{
    board->row1_1= ' '; board->row1_2= ' '; board->row1_3= ' ';
    board->row2_1= ' '; board->row2_2= ' '; board->row2_3= ' ';
    board->row3_1= ' '; board->row3_2= ' '; board->row3_3= ' ';    
}

void change_stage(int num, struct board_stage *board)
{
    switch(num)
	{
	case 1:
	    board->row1_1 = 'X';
	    break;
	case 2:
	    board->row1_2 = 'X';
	    break;
	case 3:
	    board->row1_3 = 'X';
	    break;
	case 4:
	    board->row2_1 = 'X';
	    break;
	case 5:
	    board->row2_2 = 'X';
	    break;
	case 6:
	    board->row2_3 = 'X';
	    break;
	case 7:
	    board->row3_1  = 'X';
	    break;
	case 8:
	    board->row3_2 = 'X';
	    break;
	case 9:
	    board->row3_3 = 'X';
	    break;

	default:
	    break;
	}
}

// draws the current stage of board should have run init_board stage command at first
void draw_board(struct board_stage *board)
{
    // First row
    printf("\n\t\t\t\t %c ┃ %c ┃ %c \n", board->row1_1, board->row1_2, board->row1_3);
    printf("\t\t\t\t━━━━━━━━━━━\n");

    // Second row
    printf("\t\t\t\t %c ┃ %c ┃ %c \n", board->row2_1, board->row2_2, board->row2_3);
    printf("\t\t\t\t━━━━━━━━━━━\n");    
    // Third row
    printf("\t\t\t\t %c ┃ %c ┃ %c \n", board->row3_1, board->row3_2, board->row3_3);
}
