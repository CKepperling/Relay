#pragma once

#include <string>
#include <vector>

#include "User.hpp"

class Channel
{
public:
    Channel(int id, const std::string &name);

    int getId() const;

    const std::string &getName() const;

    const std::vector<User>& getUsers() const;


    bool addUser(const User& user);

    bool removeUser(int userId);

    void printUserList() const;

private:
    int id_;

    std::string name_;

    std::vector<User> users_;

};