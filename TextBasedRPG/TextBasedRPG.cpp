// TextBasedRPG.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	player *a = new player(); 
	a->init("Arvin", 100);
	player *b = new player();
	b->init("Arvin", 100);
	cout << b->mCurrentHP << "\n";

	a->attack(b, 20);
	cout << b->mCurrentHP;

	a->move(diretionLeft);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(directionDown);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(diretionLeft);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(directionUp);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(diretionLeft);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(directionDown);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(directionRight);
	cout << a->getPosition().x << " " << a->getPosition().y << "\n";
	a->move(directionRight);
	cout << a->getPosition().x << " " << a->getPosition().y;

	system("pause");
	return 0;
}

