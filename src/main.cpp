#include <iostream>
#include <stdexcept>

#include "User.hpp"

int main()
{
    std::cout << "=== Relay User Test ===" << std::endl;

    try
    {
        User user(1, "John");

        std::cout << "User created successfully!" << std::endl;
        std::cout << "ID: " << user.getId() << std::endl;
        std::cout << "Username: " << user.getUsername() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}