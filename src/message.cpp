#pragma once

#include <string>
#include "User.hpp"

class Message
{
public:

    Message(int id, int senderId, int channelId, std::string content, int time);

    int getId() const;

    int getSenderId() const;

    int getChannelId() const;

    std::string getContent() const;

    int getTime() const; //could be std::chrono need to look into it


private:

    int id_;

    int senderId_;

    int channelId_;

    std::string content_;

    int time_;

};