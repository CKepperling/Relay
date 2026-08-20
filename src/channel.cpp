#include "channel.hpp"

#include <algorithm>
#include <iostream>
#include <stdexcept>

Channel::Channel(int id, const std::string& name)
    : id_(id), name_(name)
{
    if (name.empty())
    {
        throw std::invalid_argument("Channel name cannot be empty");
    }
}

int Channel::getId() const
{
    return id_;
}

const std::string& Channel::getName() const
{
    return name_;
}

const std::vector<User>& Channel::getUsers() const
{
    return users_;
}

bool Channel::addUser(const User& user)
{
    auto it = std::find_if(
        users_.begin(),
        users_.end(),
        [user](const User& existingUser)
        {
            return existingUser.getId() == user.getId();
        }
    );

    if (it != users_.end())
    {
        return false;
    }

    users_.push_back(user);
    return true;
}

bool Channel::removeUser(int userId)
{
    auto it = std::find_if(
        users_.begin(),
        users_.end(),
        [userId](const User& user)
        {
            return user.getId() == userId;
        }
    );

    if (it != users_.end())
    {
        users_.erase(it);
        return true;
    }

    return false;
}

void Channel::printUserList() const
{
    for (const auto& user : users_)
    {
        std::cout << user.getUsername()
                  << ", "
                  << user.getId()
                  << "\n";
    }
}