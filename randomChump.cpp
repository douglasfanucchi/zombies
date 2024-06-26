#include <Zombie.hpp>
#include <iostream>

void randomChump(std::string name) {
    Zombie *zombie = newZombie(name);

    std::cout << zombie->getAnnounce() << std::endl;

    delete zombie;
}