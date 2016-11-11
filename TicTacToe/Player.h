#pragma once
#include <iostream>
#include <string>

using namespace std;
class Player{

public:
	Player();
	Player(string, string);

private:
	string name;
	string symbol;
	int score;
};

