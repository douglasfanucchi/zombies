#include <Zombie.hpp>
#include <asserts.hpp>

void test_should_create_a_zombie_instance()
{
    Zombie zombie("douglas");

    ASSERT_STREQ("douglas", zombie.getName());
}

void test_should_get_zombie_announce() {
    Zombie zombie("douglas");
    std::string expected = "douglas: BraiiiiiiinnnzzzZ...";
    
    std::string result = zombie.getAnnounce();

    ASSERT_STREQ(expected, result);
}

void RUN_ZOMBIE_SUITE()
{
    test_should_create_a_zombie_instance();
    test_should_get_zombie_announce();
}
