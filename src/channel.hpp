#include <vector>
#include <User.hpp>

class Channel
{
public:
    Channel();

    Channel(int id, const std::string &name, std::vector<User> users);

    int getId() const;

    const std::string &getName() const;

    std::vector<User> getUserVector();


    int addUser(User user);

    int removeUser();

    std::string getUserList();

private:
    int id_;

    std::string name_;

    std::vector<User> users_;
};