#ifndef STATE_INCLUDED
#define STATE_INCLUDED

#include <stdio.h>
#include <stdlib.h>

class State {
public:
	State(); // Default Constructor
	State(const State& s); // Copy Constructor
	~State(void); // destructor
	void setBoard(const int src[32]); // most likely not gonna use
	void switchColor();
	int getColor();
	void setColor(const int c);
	void walkover(int mov[2]);
	void getBoard(int dst[32]);
private:
	int color;
	int board[32];
};

#endif