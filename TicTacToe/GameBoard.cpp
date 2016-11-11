#include "GameBoard.h"

GameBoard::GameBoard(){
	gameNum = 0;
	gameSize = 0;
	newGame();
}


GameBoard::GameBoard(Player p1, Player p2){
	GameBoard();
	gameSize = 2;
	player1 = p1;
	player2 = p2;
}

bool GameBoard::addPlayer(Player p){
	if (gameSize == 2){
		return false;
	}
	else if(gameSize == 1){
		player2 = p;
	}
	else{
		player1 = p;
	}

	return true;
}

void GameBoard::newGame(){
	gameNum++;
	//player2 goes first on odd games
	if (gameNum % 2 == 0){
		currentPlayer = player2;
	}
	else{
		currentPlayer = player1;
	}
}

void GameBoard::emptyBoard(){

}
