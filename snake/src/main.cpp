#include <iostream>
using namespace std;
bool gameOver;
const int hooghte = 20;
const int breedte = 20;
int x, y, fruitX, fruitY, score;

void setup()
{
	gameOver = false;
	x = breedte / 2;
	y = hooghte / 2;
	//fruitX = rand() % breedte;
	//fruitY = rand() % hooghte;
}

void draw()
{
	for (int i = 0; i < breedte; i++)

		cout << "#";
	cout << endl;

	for (int i = 0; i < hooghte; i++)
	{
		for (int i = 0; i < hooghte; i++){
			 
		}

	}
}

void input()
{
}

void loqic()
{
}

int main()
{
	setup();
	while (!gameOver)
	{
		draw();
		input();
		loqic();
	}
}