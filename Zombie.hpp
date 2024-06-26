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
};

Zombie *newZombie(std::string);

#endif
