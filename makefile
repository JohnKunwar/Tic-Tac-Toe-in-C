SRC = main.c board.c verdict.c
OBJ = main.o board.o verdict.o
PROG = tic_tac_toe

$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)


$(OBJ) : $(SRC)

