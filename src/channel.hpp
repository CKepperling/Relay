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


    bool addUser(User user);

    bool removeUser(User user);

    std::string getUserList() const;

private:
    int id_;

    std::string name_;

    std::vector<User> users_;

};