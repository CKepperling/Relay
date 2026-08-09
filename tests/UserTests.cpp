#include <cassert>
#include <iostream>
#include <stdexcept>

#include "../src/User.hpp"

int main()
{
    // Test 1: valid user
    User user(1, "John");

    assert(user.getId() == 1);
    assert(user.getUsername() == "John");

    // Test 2: empty username should throw
    bool exceptionThrown = false;

    try
    {
        User invalidUser(2, "");
    }
    catch (const std::invalid_argument &)
    {
        exceptionThrown = true;
    }

    assert(exceptionThrown);

    std::cout << "All User tests passed!" << std::endl;

    return 0;
}