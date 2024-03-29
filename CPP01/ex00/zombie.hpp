#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie{
	private:
		string name;
	public:
		void setName(string name);
		string getName(void) const;
		void announce(void);
		~Zombie();
};

Zombie *newZombie(string name);
void randomChump(string name);

#endif
