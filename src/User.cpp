#include "User.hpp"
#include <stdexcept>

User::User(int id, const std::string &username) : id_(id), username_(username)
{
    if (username.empty())
    {
        throw std::invalid_argument("Username cannot be empty");
    }
}

int User::getId() const
{
    return id_;
}

const std::string &User::getUsername() const
{
    return username_;
}