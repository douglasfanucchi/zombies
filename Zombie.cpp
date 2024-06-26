#include <Zombie.hpp>

Zombie::Zombie(std::string name) : name(name) {}

std::string Zombie::getName(void)
{
    return this->name;
}

std::string Zombie::getAnnounce(void)
{
    return getName() + ": BraiiiiiiinnnzzzZ...";
}
