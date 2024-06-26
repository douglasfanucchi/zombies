#include <Zombie.hpp>

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *zombies = new Zombie[n];

    for(int i = 0; i < n; i++) {
        zombies[i].setName(name);
    }

    return zombies;
}

int main()
{
    int n = 7;
    Zombie *zombies = zombieHorde(n, "Foo");

    for(int i = 0; i < n; i++) {
        zombies[i].announce();
    }

    delete[] zombies;
}
