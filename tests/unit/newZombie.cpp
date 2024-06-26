#include <Zombie.hpp>
#include <asserts.hpp>

void test_should_create_new_zombie_using_new_zombie_function()
{
    Zombie *zombie = newZombie("douglas");

    ASSERT_STREQ("douglas", zombie->getName());

    delete zombie;
}

void RUN_NEW_ZOMBIE_SUITE()
{
    test_should_create_new_zombie_using_new_zombie_function();
}