#include <cassert>
#include <iostream>
#include <stdexcept>

#include "../src/channel.hpp"
#include "../src/User.hpp"

void testChannelCreation()
{
    Channel channel(1, "general");

    assert(channel.getId() == 1);
    assert(channel.getName() == "general");
    assert(channel.getUsers().empty());
}

void testEmptyChannelName()
{
    bool exceptionThrown = false;

    try
    {
        Channel channel(1, "");
    }
    catch (const std::invalid_argument&)
    {
        exceptionThrown = true;
    }

    assert(exceptionThrown);
}

void testAddUser()
{
    Channel channel(1, "general");

    User user(1, "Clayton");

    bool added = channel.addUser(user);

    assert(added);
    assert(channel.getUsers().size() == 1);
    assert(channel.getUsers()[0].getId() == 1);
}

void testAddMultipleUsers()
{
    Channel channel(1, "general");

    User clayton(1, "Clayton");
    User alice(2, "Alice");
    User bob(3, "Bob");

    channel.addUser(clayton);
    channel.addUser(alice);
    channel.addUser(bob);

    assert(channel.getUsers().size() == 3);
}

void testRemoveUser()
{
    Channel channel(1, "general");

    User clayton(1, "Clayton");
    User alice(2, "Alice");

    channel.addUser(clayton);
    channel.addUser(alice);

    bool removed = channel.removeUser(1);

    assert(removed);
    assert(channel.getUsers().size() == 1);
    assert(channel.getUsers()[0].getId() == 2);
}

void testRemoveNonexistentUser()
{
    Channel channel(1, "general");

    User clayton(1, "Clayton");

    channel.addUser(clayton);

    bool removed = channel.removeUser(999);

    assert(!removed);
    assert(channel.getUsers().size() == 1);
}

void testDuplicateUser()
{
    Channel channel(1, "general");

    User clayton(1, "Clayton");

    bool firstAdd = channel.addUser(clayton);
    bool secondAdd = channel.addUser(clayton);

    assert(firstAdd);
    assert(!secondAdd);
    assert(channel.getUsers().size() == 1);
}

int main()
{
    testChannelCreation();
    testEmptyChannelName();
    testAddUser();
    testAddMultipleUsers();
    testDuplicateUser();
    testRemoveUser();
    testRemoveNonexistentUser();

    std::cout << "All Channel tests passed!\n";

    return 0;
}

