/*
 * main.c
 *
 *  Created on: Apr 26, 2019
 *      Author: orrbo
 */
#include <stdio.h>
#include <stdlib.h>

#include "SPBufferset.h"
#include  "util.h"
#include "solver.h"
#include "game.h"
#include "parser.h"

int main(int argc, char *argv[]) {
	Board* board;
	int seed = atoi(argv[1]);
	srand(seed);

	SP_BUFF_SET()
	;

	setbuf(stdout, NULL);

	if (argc < 1) {
		exit(-1);
	}

	board = initGame(9, 3, 3);

	while (1) {
		playTurn(&board);
	}
}
