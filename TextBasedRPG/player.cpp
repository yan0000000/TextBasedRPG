#include "stdafx.h"
#include "player.h"


player::player()
{
}

void player::init(string name, int hp)
{
	actor::init(name, hp);
	position p;
	p.x = 0;
	p.y = 0;
	this->pos = p;
}

player::~player()
{
}


void player::move(direction drxn)
{
	switch (drxn)
	{
	case diretionLeft:
		this->pos.x -= 1;
		break;
	case directionRight:
		this->pos.x += 1;
		break;
	case directionUp:
		this->pos.y += 1;
		break;
	case directionDown:
		this->pos.y -= 1;
		break;
	default:
		break;
	}
}

position player::getPosition()
{
	return this->pos;
}