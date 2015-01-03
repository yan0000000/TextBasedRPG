#include <iostream>

using namespace std;

#pragma once
class actor
{
public:
	string mName;
	int mCurrentHP;

	actor();
	~actor();

	virtual void init(string name, int hp);
	void attack(actor *enemy, int damage);
	bool isDead();

protected:
	int maxHP;
};

