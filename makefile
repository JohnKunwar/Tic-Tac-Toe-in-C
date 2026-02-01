SRC = main.c board.c verdict.c intro_outro.c bot.c
OBJ = main.o board.o verdict.o intro_outro.o bot.o
PROG = tic_tac_toe

$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)


$(OBJ) : $(SRC)

