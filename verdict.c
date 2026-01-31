#include "header.h"


// should contain win/loss/draw condition

// This checks only row,columun,diagonal that is affect by current move not everything. 
bool win_check (struct board_stage *board, int num)
{
    if (num == 1)
	{
	    if (board->row1_1 == board->row1_2 && board->row1_2  == board->row1_3)
		return true;
	    else if (board->row1_1 == board->row2_1 && board->row2_1 == board->row3_1)
		return true;
	    else if (board->row1_1 == board->row2_2 && board->row2_2 == board->row3_3)
		return true;
	}
    else if (num == 2)
	{
	    if (board->row1_1 == board->row1_2 && board->row1_2 == board->row1_3)
		return true;
	    else if (board->row1_2 == board->row2_2 && board->row2_2 == board->row3_2)
		return true;
	}
    else if (num == 3)
	{
	    if (board->row1_1 == board->row1_2 && board->row1_2 == board->row1_3)
		return true;
	    else if (board->row1_3 == board->row2_3 && board->row2_3 == board->row3_3)
		return true;
	    else if (board->row1_3 == board->row2_2 && board->row2_2 == board->row3_1)
		return true;
	}
    else if (num == 4)
	{
	    if (board->row1_1 == board->row2_1 && board->row2_1 == board->row3_1)
		return true;
	    else if (board->row2_1 == board->row2_2 && board->row2_2 == board->row2_3)
		return true;
	}
    else if (num == 5)
	{
	    if (board->row1_2 == board->row2_2 && board->row2_2 == board->row3_2)
		return true;
	    else if (board->row2_1 == board->row2_2 && board->row2_2 == board->row2_3)
		return true;
	    else if (board->row1_1 == board->row2_2 && board->row2_2 == board->row3_3)
		return true;
	    else if (board->row1_3 == board->row2_2 && board->row2_2 == board->row3_1)
		return true;

	}
    else if (num == 6)
	{
	    if (board->row1_3 == board->row2_3 && board->row2_3 == board->row3_3)
		return true;
	    else if (board->row2_1 == board->row2_2 && board->row2_2 == board->row2_3)
		return true;	    
	}
    else if (num == 7)
	{
	    if (board->row1_1 == board->row2_1 && board->row2_1 == board->row3_1)
		return true;
	    else if (board->row1_3 == board->row2_2 && board->row2_2 == board->row3_1)
		return true;
	    else if (board->row3_1 == board->row3_2 && board->row3_2 == board->row3_3)
		return true;
	}
    else if (num == 8)
	{
	    if (board->row3_1 == board->row3_2 && board->row3_2 == board->row3_3)
		return true;
	    else if (board->row1_2 == board->row2_2 && board->row2_2 == board->row3_2)
		return true;
	}
    else if (num == 9)
	{
	    if (board->row1_1 == board->row2_2 && board->row2_2 == board->row3_3)
		return true;
	    else if (board->row1_3 == board->row2_3 && board->row2_3 == board->row3_3)
		return true;
	    else if (board->row3_1 == board->row3_2 && board->row3_2 == board->row3_3)
		return true;	    

	}
    
    return false;
}

// returns 1 for wins returns 0 for nothing happens and return -1 for draw
int verdict_check(struct board_stage *board, int num)
{
    bool won = win_check(board, num);

    if (won == true)
	{
	    printf("won\n");
	    return 1; 
	}

    return 0;
//    draw_check(); //
//    loss_check();
}
