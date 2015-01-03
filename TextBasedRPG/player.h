#pragma once
#include "actor.h"
#include "direction.h"
#include "position.h"

class player :
	public actor
{
public:
	void move(direction drxn);

	player();
	~player();

	void init(string name, int hp);
	position getPosition();
private:
	position pos;
};

