#include "channel.hpp"

#include <stdexcept>
#include <vector>

Channel::Channel(int id, const std::string &name) : id_(id), name_(name)
{
    if (name.empty())
    {
        throw std::invalid_argument("Channel cannot be empty");
    }
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

}

// maybe move these to using User ids instead
bool Channel::removeUser(User user)
{

}


std::string Channel::getUserList() const
{
    
}