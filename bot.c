#include "header.h"


void bot_move(struct board_stage *board)
{
    srand(time(NULL));
    int random_num = (rand() % 9) + 1;

    change_bot_stage(random_num, board);
}
