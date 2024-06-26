#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie
{
    std::string name;

    public:
        Zombie(std::string);
        std::string getName(void);
        std::string getAnnounce(void);
        ~Zombie(void);
};

Zombie *newZombie(std::string);
void randomChump(std::string);

#endif
