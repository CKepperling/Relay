#include <channel.hpp>
#include <stdexcept>
#include <vector>

Channel::Channel(int id, const std::string &name, std::vector<User> users) : id_(id), name_(name), users_(users)
{
    if (name.empty())
    {
        throw std::invalid_argument("Username cannot be empty");
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

std::vector<User> getUserVector()
{
    return;
}

int addUser(User user)
{

}

int removeUser(User user)
{

}


std::string getUserList()
{
    
}