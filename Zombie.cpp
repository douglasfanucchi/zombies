#include <Zombie.hpp>
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

void Zombie::setName(std::string name)
{
    this->name = name;
}

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

void Zombie::announce(void)
{
    std::cout << this->getAnnounce() << std::endl;
}
