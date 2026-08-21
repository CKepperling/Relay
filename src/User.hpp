#pragma once

#include <string>

class User
{
public:
    User();

    User(int id, const std::string &username);

    int getId() const;

    const std::string &getUsername() const;

private:
    int id_;

    std::string username_;
};