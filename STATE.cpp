#define _CRT_SECURE_NO_WARNINGS

#include "STATE.h"
#include <cstring>
State::State()
{
	memset(board, 0, 32);
}

State::State(const State& s)
{
	setBoard(s.board);
	color = s.color;
}

State::~State(void) {  }

void State::setBoard(const int src[32])
{
	for (int i = 0; i < 32; i++) board[i] = src[i];
}

void State::switchColor()
{
	color = (color == 0) ? 1 : 0;
}

int State::getColor() { return color; }

void State::setColor(const int c) { color = c; }

void State::walkover(int mov[2])
{
	char piece = board[mov[0]];
	board[mov[0]] = '-';
	board[mov[1]] = piece;
}

void State::getBoard(int dst[32])
{
	for (int i = 0; i < 32; i++)
		dst[i] = board[i];
}
