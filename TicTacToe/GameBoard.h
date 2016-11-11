#pragma once
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class GameBoard{
public:
	GameBoard();
	GameBoard(Player p1, Player p2);

	/*
	* add a new player to the game
	* require: player already in the game < 2
	* return: false if p could not be added
	*/
	bool addPlayer(Player p);

	/*
	* print out a 3x3 board including the moves made by the players
	*/
	void printBoard();

	/*
	* print the current score of the game in the format:
	*/
	void printScore();

	/*
	* move of the current player
	* effect: adds his/her's symbol onto the game board
	* the current player changes to his opponant
	*/
	bool nextMove(int x, int y);

	/*
	* return the name of the current player
	*/
	string currentPlayer();

	/*
	* returns: 1 - if player1 wins the game
	*		   2 - if player2 wins the game
	*		   0 - if no winner so far
	*/
	int gameOver();

	

	void restart();

private:
	string board[3][3];
	Player player1, player2;
	Player currentPlayer; //this player's turn (alternatives between player1 and player2)
	int gameNum;
	int score[2]; 
	int gameSize;

	/*
	* start a new game
	* effects: the game board resets
	* the starting player changes to the other player
	*/
	void newGame();


	/*
	* 
	*/
	void emptyBoard();
};

