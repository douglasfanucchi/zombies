#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie
{
    std::string name;

    public:
        Zombie(void) {}
        Zombie(std::string);
        void setName(std::string);
        std::string getName(void);
        std::string getAnnounce(void);
        ~Zombie(void);
        void announce(void);
};

Zombie *newZombie(std::string);
void randomChump(std::string);

#endif
