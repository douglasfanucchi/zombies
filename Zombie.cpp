#include <Zombie.hpp>
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

std::string Zombie::getName(void)
{
    return this->name;
}

std::string Zombie::getAnnounce(void)
{
    return getName() + ": BraiiiiiiinnnzzzZ...";
}

Zombie::~Zombie(void)
{
    std::cout << getName() + ": DyiiiiiiiiiingggG..." << std::endl;
}
