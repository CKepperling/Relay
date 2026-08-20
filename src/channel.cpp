#include "channel.hpp"

#include <stdexcept>
#include <vector>
#include <algorithm>

Channel::Channel(int id, const std::string &name) : id_(id), name_(name)
{
    if (name.empty())
    {
        throw std::invalid_argument("Channel cannot be empty");
    }

    std::vector<User> users_;
}

int Channel::getId() const
{
    return id_;
}

const std::string &Channel::getName() const
{
    return name_;
}

const std::vector<User>& Channel::getUsers() const
{
    return users_;
}

bool Channel::addUser(User user)
{
    std::vector<User> users = getUsers();

    int length = users.size();

    users.push_back(user);

    // return true if length is now + 1 for an added user
    return length + 1 == users.size();
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


std::string Channel::getUserList() const
{
    // Go through all users and print out a list \n each for every user in the channel
}