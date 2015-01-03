#include "stdafx.h"
#include "actor.h"


actor::actor()
{
}

void actor::init(string name, int hp)
{
	this->mName = name;
	this->mCurrentHP = hp;
	this->maxHP = hp;
}

actor::~actor()
{
}

void actor::attack(actor *enemy, int damage)
{
	enemy->mCurrentHP -= damage;
}

bool actor::isDead()
{
	return this->mCurrentHP <= 0;
}