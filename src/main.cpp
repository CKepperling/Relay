#include <iostream>

#include "User.hpp"
#include "channel.hpp"

int main()
{
    std::cout << "=== Relay Channel Test ===\n";

    User clayton(1, "Clayton");
    User alice(2, "Alice");
    User bob(3, "Bob");

    Channel general(1, "general");

    std::cout << "Channel ID: "
              << general.getId() << "\n";

    std::cout << "Channel Name: "
              << general.getName() << "\n";

    general.addUser(clayton);
    general.addUser(alice);
    general.addUser(bob);

    std::cout << "\nMembers:\n";
    general.printUserList();

    std::cout << "\nRemoving Alice...\n";

    if (general.removeUser(2))
    {
        std::cout << "Alice removed successfully.\n";
    }
    else
    {
        std::cout << "Alice was not found.\n";
    }

    std::cout << "\nMembers after removal:\n";
    general.printUserList();

    return 0;
}