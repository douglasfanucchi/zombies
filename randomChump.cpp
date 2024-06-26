#include <Zombie.hpp>
#include <iostream>

void randomChump(std::string name) {
    Zombie *zombie = newZombie(name);

    zombie->announce();

    delete zombie;
}